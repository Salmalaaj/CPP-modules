/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 06:55:08 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/24 09:45:45 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <iomanip>
# include <algorithm>

class BitcoinExchange
{
    private:
        std::map<std::string, float> data;
        
    public:
        BitcoinExchange();
        BitcoinExchange(std::string const &filename);
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &op);
        ~BitcoinExchange();
        
        void    loadDataFromFile();
        void    handleInputFile(std::string const &filename);
};

#endif