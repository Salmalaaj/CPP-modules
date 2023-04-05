/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:31:03 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 06:35:58 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
    public:
       virtual ~IMateriaSource() {}
       virtual void learnMateria(AMateria*) = 0;
       virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif