/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:17:00 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/27 05:39:51 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string empty_line(std::string str, std::string request)
{
    while (str.empty() && !std::cin.eof())
    {
        std::cout << "Wrong input!" << std::endl;
        std::cout << request;
        getline(std::cin, str);
    }
    return (str);
}

void    PhoneBook::Ft_Add()
{
    std::string str;
    static int i;
    
    std::cout << "Enter your first name ==> ";
    getline(std::cin, str);
    str = empty_line(str, "Enter your first name ==> ");
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        this->contact[i].set_first(str);
    }
    else
        this->contact[i].set_first(str);
    std::cout << "Enter your last name ==> ";
    getline(std::cin, str);
    str = empty_line(str, "Enter your last name ==> ");
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        this->contact[i].set_last(str);
    }
    else
        this->contact[i].set_last(str);
    std::cout << "Enter your nickname ==> ";
    getline(std::cin, str);
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        this->contact[i].set_nick(str);
    }
    else
        this->contact[i].set_nick(str);
    std::cout << "Enter your phone number ==> ";
    getline(std::cin, str);
    str = empty_line(str, "Enter your number ==> ");
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        this->contact[i].set_nemra(str);
    }
    else
        this->contact[i].set_nemra(str);
    std::cout << "Enter your darkest secret ==> ";
    getline(std::cin, str);
    str = empty_line(str, "Enter your darkest secret ==> ");
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        this->contact[i].set_sir(str);
    }
    else
        this->contact[i].set_sir(str);
    i++;
    if (i == 8)
        i = 0;
    this->index++;
    if (this->index > 8)
        this->index = 8;
}

void    PhoneBook::Ft_Exit()
{
    exit(EXIT_SUCCESS);
}

void    PhoneBook::Ft_Search()
{
    std::string in;
    int entier;
    int i = 0;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  INDEX   |   FIRST  |   LAST   | NICKNAME |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (i < this->index)
    {
        std::cout << "|    " << i << "     |";
        std::cout << std::left << std::setw(10) << this->contact[i].get_first() << "|" << std::setw(10) \
                  << this->contact[i].get_last() << "|" << std::setw(10) << this->contact[i].get_nick() << "|" << std::endl;
        i++;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
    }
    std::cout << "Write the index ==> ";
    getline(std::cin, in);
    entier = in[0] - 48;
    if (entier < 0 || entier > 7 || entier >= this->index || in.length() > 1)
        std::cout << "Index out of range" << std::endl;
    else
    {
        std::cout << "|----------|----------|----------|----------|----------|----------|" << std::endl;
	    std::cout << "|  INDEX   |   FIRST  |   LAST   | NICKNAME | P_NUMBER | D_SECRET |" << std::endl;
	    std::cout << "|----------|----------|----------|----------|----------|----------|" << std::endl;
        std::cout << "|    " << entier << "     |";
        std::cout << std::left << std::setw(10) << this->contact[entier].get_first() << "|" << std::setw(10) \
                  << this->contact[entier].get_last() << "|" << std::setw(10) << this->contact[entier].get_nick() \
                  << "|" << std::setw(10) << this->contact[entier].get_nemra() << "|" << std::setw(10) \
                  << this->contact[entier].get_sir() << "|" << std::endl;
        std::cout << "|----------|----------|----------|----------|----------|----------|" << std::endl;
    }
}
