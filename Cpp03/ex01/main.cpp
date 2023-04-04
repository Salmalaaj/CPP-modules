/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:55:38 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:28:29 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    scav("Moi");
    scav.attack("Toi");
    
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();
    
    return (0);
}