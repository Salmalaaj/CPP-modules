/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:38:51 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 05:57:42 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &equal)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &equal)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = equal.ideas[i];
    }
    return *this;
}

std::string Brain::getIdea(int i) const
{
    return this->ideas[i];
}

void Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}