/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:18:01 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/24 22:36:53 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src), target(src.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const & equal )
{
    AForm::operator=(equal);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
	    std::cout << "Makes some drilling noises ..." << std::endl;
	    if (time(NULL) % 2)
	        std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->target << " robotomization failed" << std::endl;
    }
}
