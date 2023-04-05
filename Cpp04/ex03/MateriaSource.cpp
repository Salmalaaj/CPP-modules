/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:31:07 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 08:27:43 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        this->_materia[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    for (int i = 0; i < 4; i++) {
        this->_materia[i] = NULL;
    }
    *this = src;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete this->_materia[i];
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & equal) {
    if (this != &equal) {
        for (int i = 0; i < 4; i++) {
            this->_materia[i] = equal._materia[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] == NULL) {
            this->_materia[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i]->getType() == type) {
            return this->_materia[i]->clone();
        }
    }
    return NULL;
}

