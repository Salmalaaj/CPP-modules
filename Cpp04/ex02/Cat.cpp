/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:18:11 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 05:47:36 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(Cat const &equal)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &equal)
        this->type = equal.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat meows 🐈" << std::endl;
}

