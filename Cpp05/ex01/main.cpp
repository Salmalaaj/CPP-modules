/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:10 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/26 23:10:52 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat one("bureaucrat1", 8);
        Form form("form1", 60, 70);
        
        std::cout << form << std::endl;
        std::cout << one << std::endl;

        one.incrementGrade();
        std::cout << one << std::endl;
        
        one.signForm(form);
        std::cout << form << std::endl;
        one.signForm(form);
        
        std::cout << form << std::endl;
        one.signForm(form);

    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}