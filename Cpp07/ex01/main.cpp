/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 01:28:32 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/15 05:00:25 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void    print(T index)
{
    std::cout << index << std::endl;
}

int main()
{
    //Testing with int array
    int array[] = {1, 2, 3, 4, 5};
    iter(array, 5, print);

    //Testing with string array
    std::string array2[] = {"Hello", "Salma", "!"};
    iter(array2, 3, print);
    
}
