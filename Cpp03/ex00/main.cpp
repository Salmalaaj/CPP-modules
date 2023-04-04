/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:55:38 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:14:57 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    clap("Salma");
    ClapTrap    clap2("Youssef");

    clap.attack("Youssef");
    clap2.takeDamage(5);
    clap2.beRepaired(5);
    return (0);
}