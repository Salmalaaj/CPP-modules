/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 05:47:24 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/01 17:29:00 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

typedef struct Data
{
    std::string str;
    int        id;
}              Data;

class Serializer
{
    private:
        Serializer();
    public:
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &copy);
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif