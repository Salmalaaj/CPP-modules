/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:19:23 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 05:19:31 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &equal)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &equal)
        this->type = equal.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog barks 🐩" << std::endl;
}
