/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:57:17 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:29:31 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name){
    std::cout << "ScavTrap " << name << " is born 🤱🏼" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    this->Name = name;
}

ScavTrap::ScavTrap(ScavTrap const & src){
    *this = src;
}

ScavTrap::~ScavTrap(){
    std::cout << this->Name << " has been destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & equal){
    this->Name = equal.Name;
    this->HitPoints = equal.HitPoints;
    this->EnergyPoints = equal.EnergyPoints;
    this->AttackDamage = equal.AttackDamage;
    return (*this);
}

void    ScavTrap::guardGate(){
    std::cout << this->Name << " has entered in Gate keeper mode" << std::endl;
}

