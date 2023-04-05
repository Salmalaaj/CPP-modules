/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:31:10 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 07:24:19 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materia[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        ~MateriaSource();

        MateriaSource & operator=(MateriaSource const & rhs);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
