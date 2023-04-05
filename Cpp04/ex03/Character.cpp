/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:30:43 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 07:37:12 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const & src) {
    *this = src;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

Character & Character::operator=(Character const & equal) {
    if (this != &equal) {
        this->_name = equal._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = equal._inventory[i]->clone();
    }
    return *this;
}

std::string const & Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        this->_inventory[idx] = NULL;
}



void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4)
        this->_inventory[idx]->use(target);
}

