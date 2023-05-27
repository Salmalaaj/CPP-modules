/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 05:08:48 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/25 00:28:07 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string const target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm( RobotomyRequestForm const & src );
        ~RobotomyRequestForm();
        RobotomyRequestForm &		operator=( RobotomyRequestForm const & equal );

        void execute(Bureaucrat const & executor) const;
};

#endif