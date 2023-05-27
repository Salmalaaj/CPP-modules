/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:10 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/26 23:13:06 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
	{
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		delete rrf;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return (0);
}