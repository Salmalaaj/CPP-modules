/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 00:46:02 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/27 06:15:40 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie semi_zombie("Foo");
    semi_zombie.announce();
    Zombie* pointer = newZombie("salma");
    pointer->announce();
    delete pointer;
    randomChump("zin ziin");
}