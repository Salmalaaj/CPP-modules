/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:50:00 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/03 06:43:25 by slaajour         ###   ########.fr       */
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
        Fixed(const Fixed& other);
        ~Fixed();
    
        Fixed& operator=(const Fixed& other);
    
        int getRawBits() const;
        void setRawBits(const int raw);
    
        float toFloat() const;
        int toInt() const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed_point);

#endif