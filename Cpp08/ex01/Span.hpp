/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:33:27 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/17 06:46:30 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

class Span
{
    private:
        unsigned int number;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const &copy);
        ~Span();
        Span &operator=(Span const &copy);
        
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addition(std::vector<int>::iterator it, std::vector<int>::iterator ite);
        
        class FullException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Error: The container is full";
            }
        };
        class NoSpanException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Error: There is no span to find";
            }
        };
};

#endif