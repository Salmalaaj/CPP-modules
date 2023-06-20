/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:29:32 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/19 06:14:59 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;
    std::deque<int> d;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    try
    {
        std::cout << *easyfind(v, 3) << std::endl;
        std::cout << *easyfind(l, 3) << std::endl;
        std::cout << *easyfind(d, 3) << std::endl;
        std::cout << *easyfind(v, 4) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not found" << std::endl;
    }
    return 0;
}