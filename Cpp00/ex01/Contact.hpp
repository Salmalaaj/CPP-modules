/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 07:01:36 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/28 20:10:24 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
class Contact
{
    private:
        static std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number; 

    public:
        void set_first(std::string smia);
        std::string get_first();
        void set_last(std::string knia);
        std::string get_last();
        void set_nick(std::string laqab);
        std::string get_nick();
        void set_sir(std::string sir);
        std::string get_sir();
        void set_nemra(std::string nemra);
        std::string get_nemra();
};

#endif