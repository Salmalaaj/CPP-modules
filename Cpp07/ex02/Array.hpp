/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:31:52 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/15 04:54:58 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:
        T *tab;
        unsigned int mySize;
    public:
        // Default constructor (Creates an empty array)
        Array() : tab(NULL), mySize(0) {}
        
        // Parameterized constructor
        Array(unsigned int n) : mySize(n)
        {
            tab = new T[n];
            for (unsigned int i = 0; i < n; i++)
                tab[i] = 0;
            // Initializing with default value
        }
        
        // Copy constructor
        Array(Array const &copy) : mySize(copy.mySize)
        {
            tab = new T[mySize];
            for (unsigned int i = 0; i < mySize; i++)
                tab[i] = copy.tab[i];
        }
        
        // Assignation operator
        Array &operator=(Array const &copy) 
        {
            // Deep copy
            if (this != &copy)
            {
                delete [] tab;
                mySize = copy.mySize;
                tab = new T[mySize];
                for (unsigned int i = 0; i < mySize; i++)
                    tab[i] = copy.tab[i];
            }
            return (*this);
        }
        
        // Destructor
        ~Array() 
        {
            delete [] tab;
        }

        // Subscript operator
        T &operator[](unsigned int index)
        {
            if (index >= mySize)
                throw std::exception();
            return (tab[index]);    
        }
        
        // Size function
        unsigned int size() const
        {
            return (mySize);
        }
};

#endif