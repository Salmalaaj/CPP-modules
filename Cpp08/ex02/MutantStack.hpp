/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:52:52 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/17 07:07:08 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        ~MutantStack() {}
        MutantStack(MutantStack const &copy)
        {
            *this = copy;
        }
        MutantStack &operator=(MutantStack const &copy)
        {
            if (this != &copy)
                std::stack<T>::operator=(copy);
            return *this;
        }
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        iterator begin()
        {
            return std::stack<T>::c.begin();
        }
        iterator end()
        {
            return std::stack<T>::c.end();
        }

};

#endif