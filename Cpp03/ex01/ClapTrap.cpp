/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:55:54 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:17:31 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): HitPoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "ClapTrap " << name << " is born 🤱🏼" << std::endl;
    this->Name = name;
}

ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDamage(0){
}

ClapTrap::~ClapTrap(){
    std::cout << this->Name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src){
    *this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & equal){
    this->Name = equal.Name;
    this->HitPoints = equal.HitPoints;
    this->EnergyPoints = equal.EnergyPoints;
    this->AttackDamage = equal.AttackDamage;
    return (*this);
}

void    ClapTrap::attack(std::string const & target){
    if (this->EnergyPoints == 0)
        std::cout << "Not enough energy to attack!" << std::endl;
    else{
         std::cout << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
         this->EnergyPoints -= 1;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    std::cout << this->Name << " takes " << amount << " points of damage!" << std::endl;
    if (amount > this->HitPoints)
        this->HitPoints = 0;
    else
        this->HitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->EnergyPoints == 0)
        std::cout << "Not enough energy to repair!" << std::endl;
    else if (this->HitPoints <= 0)
        std::cout << this->Name << " is dead!" << std::endl;
    else
    {
        std::cout << this->Name << " is repaired by " << amount << " points!" << std::endl;
        if (amount + this->HitPoints > 10)
            this->HitPoints = 10;
        else
            this->HitPoints += amount;
        this->EnergyPoints -= 1;
    }
}