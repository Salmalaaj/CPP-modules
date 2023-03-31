/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:34:11 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/29 06:25:34 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie setName("Number one");
    setName.announce();
    Zombie* horde = zombieHorde(2, "salma");
    for (int i = 0; i < 2; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
    
}