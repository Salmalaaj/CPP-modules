/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:57:29 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/04 06:21:04 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap();

        ScavTrap &operator=(ScavTrap const & equal);
        void        guardGate();
};

#endif