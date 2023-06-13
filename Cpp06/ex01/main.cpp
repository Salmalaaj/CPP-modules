/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 05:46:00 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/02 13:11:11 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    data.str = "Hello";
    data.id = 42;

    std::cout << "String: " << data.str << std::endl;
    std::cout << "ID: " << data.id << std::endl;
    std::cout << std::endl;
    
    // Convert Data* to uintptr_t
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "data: " << &data << std::endl;
    
    // Convert uintptr_t back to Data*
    Data* ptr = Serializer::deserialize(raw);
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << std::endl;
    
    // Modify the Data object
    data.str = "Gorgoeus";
    data.id = 456;

    // Print the modified Data object
    std::cout << "Modified Data Object: " << std::endl;
    std::cout << "String: " << data.str << std::endl;
    std::cout << "ID: " << data.id << std::endl;
    

    std::cout << std::endl;
    if (ptr == &data)
        std::cout << "ptr is pointing to the same address as &data" << std::endl;
    else
        std::cout << "ptr is NOT pointing to the same address as &data" << std::endl;

    return 0;
}
