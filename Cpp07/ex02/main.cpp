/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:31:40 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/15 04:55:58 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    // Creating an empty array
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    // Creating an array of 5 elements
    Array<int> array(5);
    std::cout << "Array size: " << array.size() << std::endl;
    
    // Assigning values to the array
    for (unsigned int i = 0; i < array.size(); i++)
        array[i] = i + 1;

    // Displaying the array
    std::cout << "Array: ";
    for (unsigned int i = 0; i < array.size(); i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    
    // Testing out-of-bounds access (should throw an exception)
    try
    {
        std::cout << "Trying to access array[6]: ";
        std::cout << array[6] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    // Copying the array
    Array<int> copiedArray(array);
    copiedArray[1] = 42; // Modifying the copy
    std::cout << "Copied array: " << copiedArray[1] << std::endl;

    // Verifying the original array is unchanged
    std::cout << "Original array: " << array[1] << std::endl;

    return (0);
}
