/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:30:38 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 07:20:08 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(AMateria const & src) {
    *this = src;
}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(AMateria const & equal) {
    if (this != &equal) {
        this->_type = equal._type;
    }
    return *this;
}

std::string const & AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}

