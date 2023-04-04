/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:59:17 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:40:20 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name){
    std::cout << "FragTrap " << name << " is born 🤱🏼" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    this->Name = name;
}

FragTrap::FragTrap(FragTrap const & src){
    *this = src;
}

FragTrap::~FragTrap(){
    std::cout << this->Name << " has been destroyed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & equal){
    this->Name = equal.Name;
    this->HitPoints = equal.HitPoints;
    this->EnergyPoints = equal.EnergyPoints;
    this->AttackDamage = equal.AttackDamage;
    return (*this);
}

void    FragTrap::highFivesGuys(){
    std::cout << this->Name << " has entered in high five mode" << std::endl;
}

