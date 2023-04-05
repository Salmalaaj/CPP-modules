/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 05:38:07 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 05:38:49 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &src);
        ~Brain();
        Brain &operator=(Brain const &equal);
        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
};

#endif