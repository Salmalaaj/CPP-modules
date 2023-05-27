/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 05:09:20 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/24 05:46:32 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
#include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string const target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm( PresidentialPardonForm const & src );
        ~PresidentialPardonForm();
        PresidentialPardonForm &		operator=( PresidentialPardonForm const & equal );

        void execute(Bureaucrat const & executor) const;

};

#endif
