/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 06:55:25 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/24 10:34:02 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string const &filename)
{
    loadDataFromFile();
    handleInputFile(filename);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {
    *this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & op) {
    if (this != &op)
        this->data = op.data;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void    BitcoinExchange::loadDataFromFile()
{
    std::ifstream   infile("data.csv");
    if (!infile.is_open())
        throw std::runtime_error("Error: could not open file.");

    std::string    line;
    while (std::getline(infile, line))
    {
        if (line.empty() || line == "date,exchange_rate")
            continue;

        std::istringstream iss(line);
        std::string date;
        float price;

        std::getline(iss, date, ',');
        iss >> price;
        
        if (iss.fail())
            throw std::runtime_error("Error: could not read file.");
        this->data[date] = price;
    }
    infile.close();
}

void    BitcoinExchange::handleInputFile(std::string const &filename)
{
    std::ifstream   infile(filename);
    if (!infile.is_open())
        throw std::runtime_error("Error: could not open file.");

    std::string    line;
    while (std::getline(infile, line))
    {
        if (line.find("date") != std::string::npos)
            continue;
        
        std::istringstream iss(line);
        std::string key;
        std::string value;
        
        if (std::getline(iss, key, '|') && std::getline(iss, value, '|'))
        {
            if (key.length() != 11 || key[4] != '-' || key[7] != '-' || key[10] != ' ')
            {
                std::cerr << "Error: bad input format ==> " << key << "|" << value << std::endl;
                continue;
            }
            else
            {
                for (int i = 0; i < 10; i++)
                {
                    if (i == 4 || i == 7)
                        continue;
                    if (!isdigit(key[i]))
                    {
                        std::cerr << "Error: bad input => " << line << std::endl;
                        continue;
                    }
                }
                
                std::string year = line.substr(0, 4);
                std::string month = line.substr(5, 2);
                std::string day = line.substr(8, 2);
                
                if (year < "2009" || year > "2022")
                {
                    std::cerr << "Error: date out of range => " << line << std::endl;
                    continue;
                }
                if (year == "2009" && month == "01" && day < "02")
                {
                    std::cerr << "Error: date out of range => " << line << std::endl;
                    continue;
                }
                if (month < "01" || month > "12")
                {
                    std::cerr << "Error: bad input => " << line << std::endl;
                    continue;
                }
                if (day < "01" || day > "31")
                {
                    std::cerr << "Error: bad input => " << line << std::endl;
                    continue;
                }
                if ((month == "04" || month == "06" || month == "09" || month == "11") && day > "30")
                {
                    std::cerr << "Error: bad input => " << line << std::endl;
                    continue;
                }
                if (month == "02" && day > "28")
                {
                    std::cerr << "Error: bad input => " << line << std::endl;
                    continue;
                }
            }
            
            float rate;
            float BTC = static_cast<float>(atof(value.c_str()));
    
            if (BTC == 0.0f && value != "0.0") {
                std::cerr << "Error: bad input => " << line << std::endl;
                continue;
            }

            if (BTC < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else if (BTC > 1000)
                std::cerr << "Error: too large a number." << std::endl;
            else
            {
                std::map<std::string, float>::const_iterator it = this->data.upper_bound(key);
                if (it != this->data.begin())
                    --it;
                rate = it->second;
                float result = BTC * rate;
                std::cout << key << " => " << BTC << " = " << result << std::endl;
            }
        }
        else
            std::cerr << "Error: bad input format ==> " << line << std::endl;
    }
    infile.close();  
}

