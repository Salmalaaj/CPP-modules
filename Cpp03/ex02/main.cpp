/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:55:38 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:43:35 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    frag("Moi");
    frag.attack("Toi");
    
    frag.takeDamage(90);
    frag.beRepaired(80);
    frag.highFivesGuys();

    
    return (0);
}