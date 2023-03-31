/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 07:01:30 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/28 20:12:50 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    Contact::set_first(std::string smia)
{
    this->first_name = smia; 
}

std::string Contact::get_first()
{
    return (this->first_name);
}

void    Contact::set_last(std::string knia)
{
    this->last_name = knia; 
}

std::string Contact::get_last()
{
    return (this->last_name);
}

void    Contact::set_nick(std::string laqab)
{
    this->nickname = laqab; 
}

std::string Contact::get_nick()
{
    return (this->nickname);
}

void    Contact::set_sir(std::string sir)
{
    this->darkest_secret = sir; 
}

std::string Contact::get_sir()
{
    return (this->darkest_secret);
}

void    Contact::set_nemra(std::string nemra)
{
    this->phone_number = nemra; 
}

std::string Contact::get_nemra()
{
    return (this->phone_number);
}


