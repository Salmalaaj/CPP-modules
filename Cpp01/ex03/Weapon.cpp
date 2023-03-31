/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:49:54 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/29 08:32:36 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void    Weapon::setType(std::string _type)
{
    this->type = _type;
}

const std::string &Weapon::getType() const
{
    return (this->type);  
}

Weapon::Weapon(std::string _type) {
    this->type = _type;
}