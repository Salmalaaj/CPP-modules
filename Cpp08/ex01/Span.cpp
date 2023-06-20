/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 06:34:07 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/20 06:12:53 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n): number(n)
{
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &copy)
{
    if (this != &copy)
    {
        this->number = copy.number;
        this->vec = copy.vec;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (vec.size() < number)
        vec.push_back(n);
    else
        throw FullException();
}

int Span::shortestSpan()
{
    if (vec.size() <= 1)
        throw NoSpanException();
    std::vector<int> nbr = vec;
    std::sort(nbr.begin(), nbr.end());
    int shortest = nbr[1] - nbr[0];
    for (unsigned int i = 2; i < nbr.size(); i++)
    {
        int span = nbr[i] - nbr[i - 1];
        if (span < shortest)
            shortest = nbr[i] - nbr[i - 1];
    }
    return shortest;
}

int Span::longestSpan()
{
    if (vec.size() <= 1)
        throw NoSpanException();
    std::vector<int> nbr = vec;
    std::sort(nbr.begin(), nbr.end());
    return nbr[nbr.size() - 1] - nbr[0];
}

void Span::addition(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    if (vec.size() + std::distance(start, end) > number)
        throw FullException();
    vec.insert(vec.end(), start, end);
}