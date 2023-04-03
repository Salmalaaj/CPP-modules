/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:45:58 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/03 07:06:51 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: _fractionalBits = 8;

Fixed::Fixed()
{
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
    this->_fixedPointValue = value <<  _fractionalBits;
}

Fixed::Fixed(const float value) 
{
    this->_fixedPointValue = roundf(value * (1 <<  _fractionalBits));
}

Fixed::Fixed(const Fixed& object)
{
    *this = object;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& object)
{
  if (this != &object)
  {
    _fixedPointValue = object._fixedPointValue;
  }
  return *this;
}

int Fixed::getRawBits() const
{
  return _fixedPointValue;
}

void Fixed::setRawBits(const int raw)
{
  _fixedPointValue = raw;
}

float Fixed::toFloat() const
{
  return static_cast<float>(_fixedPointValue) / (1 <<  _fractionalBits);
}

int Fixed::toInt() const {
  return _fixedPointValue >>  _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}

Fixed Fixed::operator+(const Fixed& object) const {
  return Fixed(toFloat() + object.toFloat());
}

Fixed Fixed::operator-(const Fixed& object) const {
  return Fixed(toFloat() - object.toFloat());
}

Fixed Fixed::operator*(const Fixed& object) const {
  return Fixed(toFloat() * object.toFloat());
}

Fixed Fixed::operator/(const Fixed& object) const {
  return Fixed(toFloat() / object.toFloat());
}

Fixed& Fixed::operator++()
{
  ++_fixedPointValue;
  return *this;
}

Fixed Fixed::operator++(int)
{
  Fixed tmp(*this);
  ++_fixedPointValue;
  return tmp;
}

Fixed& Fixed::operator--()
{
  --_fixedPointValue;
  return *this;
}

Fixed Fixed::operator--(int)
{
  Fixed tmp(*this);
  --_fixedPointValue;
  return tmp;
}

bool Fixed::operator>(const Fixed& object) const 
{
  return toFloat() > object.toFloat();
}

bool Fixed::operator<(const Fixed& object) const 
{
  return toFloat() < object.toFloat();
}

bool Fixed::operator>=(const Fixed& object) const
{
  return toFloat() >= object.toFloat();
}

bool Fixed::operator<=(const Fixed& object) const
{
  return toFloat() <= object.toFloat();
}

bool Fixed::operator==(const Fixed& object) const
{
  return toFloat() == object.toFloat();
}

bool Fixed::operator!=(const Fixed& object) const
{
  return toFloat() != object.toFloat();
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
  if (a < b)
    return (a);
  else 
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
  if (a < b)
    return (a);
  else 
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
  if (a > b)
    return (a);
  else 
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
  if (a > b)
    return (a);
  else 
    return (b);
}
