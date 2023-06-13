/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:36:44 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/13 03:09:09 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif