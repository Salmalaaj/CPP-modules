/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:10 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/27 05:08:46 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

    try
    {
        Bureaucrat bureaucrat1("Bureaucrat1", 136);
        Bureaucrat bureaucrat2("Bureaucrat2", 144);
    
        ShrubberyCreationForm shrub("shrub");
        RobotomyRequestForm robot("robot");
        PresidentialPardonForm presi("presi");
        
        bureaucrat1.signForm(shrub);
        bureaucrat2.signForm(shrub);
        std::cout << std::endl;
        bureaucrat1.signForm(robot);
        std::cout << std::endl;
        bureaucrat2.signForm(presi);
        std::cout << std::endl;

        std::cout << std::endl;
        bureaucrat1.executeForm(shrub);
        std::cout << std::endl;
        bureaucrat1.executeForm(robot);
        std::cout << std::endl;
        bureaucrat1.executeForm(presi);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}