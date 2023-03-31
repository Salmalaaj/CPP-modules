/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:36:13 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/29 06:28:16 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie{
    private:
        std::string name;
    public:
        void    announce();
        Zombie(std::string name);
        ~Zombie();
        Zombie();
        void    setName(std::string name);
};
Zombie*    zombieHorde(int N, std::string name);

#endif