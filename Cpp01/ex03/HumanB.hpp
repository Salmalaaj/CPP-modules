/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:50:27 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/29 09:04:11 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

class HumanB{
    private:
        std::string name;
        Weapon  *WeaponB;
    public:
        void    attack();
        HumanB(std::string name);
        void    setWeapon(Weapon &WeaponB);
};
#endif