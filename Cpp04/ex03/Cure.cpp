/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:30:49 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 07:23:24 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &src) : AMateria(src) {}

Cure::~Cure() {}

Cure &Cure::operator=(Cure const &equal) {
    if (this != &equal) {
        this->_type = equal._type;
    }
    return *this;
}

AMateria *Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
