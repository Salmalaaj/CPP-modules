/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:45:58 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/03 06:56:52 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: _fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value <<  _fractionalBits;
}

Fixed::Fixed(const float value) 
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(value * (1 <<  _fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = other._fixedPointValue;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other) {
    _fixedPointValue = other._fixedPointValue;
  }
  return *this;
}

int Fixed::getRawBits() const {
  return _fixedPointValue;
}

void Fixed::setRawBits(const int raw) {
  _fixedPointValue = raw;
}

float Fixed::toFloat() const {
  return static_cast<float>(_fixedPointValue) / (1 <<  _fractionalBits);
}

int Fixed::toInt() const {
  return _fixedPointValue >>  _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}