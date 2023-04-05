/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:30:57 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 07:23:37 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & src);
        ~Ice();

        Ice & operator=(Ice const & rhs);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
