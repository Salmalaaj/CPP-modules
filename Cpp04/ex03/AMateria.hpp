/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:30:41 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 07:32:43 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(AMateria const & src);
        AMateria(std::string const & type);
        virtual ~AMateria();
        
        AMateria & operator=(AMateria const & equal);
        
        std::string const & getType() const;
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif