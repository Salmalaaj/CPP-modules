/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:17:00 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/22 06:47:02 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    PhoneBook::Ft_Add()
{
    std::string str;
    static int i;
    
    std::cout << "Enter your first name ==> ";
    getline(std::cin, str);
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

void    check_index(std::string index, int raqm)
{
    int entier;

    entier = std::stoi(index);
    while (entier > 7)
    // {
        std::cout << "This index doesn't exist, try again!" << std::endl;
        
}

void    PhoneBook::Ft_Search()
{
    std::string in;
    int i = 0;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  INDEX   |   FIRST  |   LAST   | NICKNAME |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (i < this->index)
    {
        std::cout << "|    " << i << "     |";
        std::cout << std::setw(10) << this->contact[i].get_first() << "|" << std::setw(10) \
                  << this->contact[i].get_last() << "|" << std::setw(10) << this->contact[i].get_nick() << "|" << std::endl;
        i++;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
    }
    std::cout << "Write the index ==> ";
    std::cin >> in;
    check_index(in, this->index);   
}

void    PhoneBook::Ft_Exit()
{
    exit(EXIT_SUCCESS);
}
