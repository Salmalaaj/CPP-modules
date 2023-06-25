/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:40:20 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/24 11:13:27 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Error: number of arguments is invalid!" << std::endl;
    else
    {
        RPN calc;
        calc.calculator(av[1]);
    }
}