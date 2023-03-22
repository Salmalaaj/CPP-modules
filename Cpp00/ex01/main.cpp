/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:19:21 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/22 07:03:52 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook ph;

    ph.index = 0;
    std::string str;
    std::cout << "Enter the command please :) ==> ";
    while (getline(std::cin, str))
    {
        if (str == "ADD")
            ph.Ft_Add();
        else if (str == "SEARCH")
            ph.Ft_Search();
        else if (str == "EXIT")
            ph.Ft_Exit();  
        else
            std::cout << "Invalid input!" << std::endl;
        std::cout << "Enter the command please :) ==> ";
    }
}
