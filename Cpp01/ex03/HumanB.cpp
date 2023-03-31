/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:50:49 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/29 09:13:53 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void    HumanB::attack()
{
    if (WeaponB)
        std::cout << name << " attacks with their " \
        << WeaponB->getType() << std::endl;
    else
        std::cout << "There is no such weapon" << std::endl;
}

void   HumanB::setWeapon(Weapon &W_B)
{
    this->WeaponB = &W_B;
}

HumanB::HumanB(std::string _name) : WeaponB(NULL)
{
    name = _name;
}

