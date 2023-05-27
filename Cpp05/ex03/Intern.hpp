/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:30:35 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/25 00:30:38 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;


class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();
        Intern &operator=(const Intern &copy);
        AForm *makeForm(std::string name, std::string target);
        class FormNotFound;
};

class Intern::FormNotFound : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("Form not found");
        }
};

#endif