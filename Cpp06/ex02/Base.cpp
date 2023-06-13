/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:38:17 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/13 03:09:03 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base* generate(void)
{
    int random = time(NULL) % 3;

    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Error in casting!" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
    }
}