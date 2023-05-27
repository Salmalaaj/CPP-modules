/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:34:27 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/25 03:19:20 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &copy)
{
    (void)copy;
    return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
    {
        if (name == array[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            switch (i)
            {
                case 0:
                    return (new PresidentialPardonForm(target));
                case 1:
                    return (new RobotomyRequestForm(target));
                case 2:
                    return (new ShrubberyCreationForm(target));
            }
        }
    }
    throw Intern::FormNotFound();
    return (NULL);
}
