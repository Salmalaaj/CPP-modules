/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:50:00 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/02 01:28:49 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& object);
        ~Fixed();
        
        Fixed& operator=(const Fixed& object);
        int getRawBits() const;
        void setRawBits(const int raw);
        float toFloat() const;
        int toInt() const;
        
        Fixed operator+(const Fixed& object) const;
        Fixed operator-(const Fixed& object) const;
        Fixed operator*(const Fixed& object) const;
        Fixed operator/(const Fixed& object) const;
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        bool operator>(const Fixed& object) const;
        bool operator<(const Fixed& object) const;
        bool operator>=(const Fixed& object) const;
        bool operator<=(const Fixed& object) const;
        bool operator==(const Fixed& object) const;
        bool operator!=(const Fixed& object) const;
        static Fixed& min(Fixed& a, Fixed& b);
        
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed_point);

#endif