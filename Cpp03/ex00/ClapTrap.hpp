/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:56:34 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:26:14 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    private:
        std::string          Name;
        unsigned int         HitPoints;
        unsigned int         EnergyPoints;
        unsigned int         AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();

        ClapTrap &  operator=(ClapTrap const & equal);

        void        attack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif