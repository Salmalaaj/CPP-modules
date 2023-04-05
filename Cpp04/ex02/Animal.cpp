/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:13:48 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 06:21:08 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &equal)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &equal)
        this->type = equal.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}
