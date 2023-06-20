/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:28:59 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/19 07:07:37 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return it;
}

/* typename it helps the compiler understand that iterator
    is a type and not a static member or variable */

/* iterator is a pointer to an element of a
    container (vector, list, deque, etc.) */

/* T is a template parameter that accepts any type of container */

#endif