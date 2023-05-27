/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:10 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/23 00:51:49 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat moi("moi", 1);
        std::cout << moi;
        moi.incrementGrade();
        std::cout << moi;
        moi.incrementGrade();
        std::cout << moi;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
 
    try
    {
        Bureaucrat toi("toi", 140);
        std::cout << toi;
        toi.decrementGrade();
        std::cout << toi;
        toi.decrementGrade();
        std::cout << toi;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}