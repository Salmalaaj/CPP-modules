/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:50:38 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/29 08:43:52 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void    HumanA::attack()
{
     std::cout << name << " attacks with their " \
     << WeaponA.getType() << std::endl;
}

HumanA::HumanA(std::string _name, Weapon &W_A) : name(_name) , WeaponA(W_A)
{
     
}