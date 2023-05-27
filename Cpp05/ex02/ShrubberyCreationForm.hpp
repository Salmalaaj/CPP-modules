/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 05:08:38 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/24 22:25:37 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string const   target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const & target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & copy);

        void	execute(Bureaucrat const & executor) const;
};

#endif
