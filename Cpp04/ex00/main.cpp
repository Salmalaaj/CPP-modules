/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:03:38 by slaajour          #+#    #+#             */
/*   Updated: 2023/04/05 05:36:16 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    
    cat->makeSound();
    dog->makeSound();
    
    animal->makeSound();

    delete animal;
    delete dog;
    delete cat;
    

    const WrongAnimal* animal2 = new WrongAnimal();
    const WrongAnimal* cat2 = new WrongCat();
    
    std::cout << cat2->getType() << " " << std::endl;
    
    cat2->makeSound();
    animal2->makeSound();
    
    delete animal2;
    delete cat2;
    
    return 0;
}