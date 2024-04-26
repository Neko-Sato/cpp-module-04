/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:19:15 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:46:43 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include <iostream>

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << std::endl;

	Animal *animals[3];
	animals[0] = new Animal("Poteto");
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[0]->makeSound();
	animals[1]->makeSound();
	animals[2]->makeSound();
	delete animals[0];
	delete animals[1];
	delete animals[2];
	std::cout << std::endl;

	WrongAnimal *wrong_animals[3];
	wrong_animals[0] = new WrongAnimal("Poteto");
	wrong_animals[1] = new WrongCat();
	wrong_animals[2] = new WrongDog();
	wrong_animals[0]->makeSound();
	wrong_animals[1]->makeSound();
	wrong_animals[2]->makeSound();
	delete wrong_animals[0];
	delete wrong_animals[1];
	delete wrong_animals[2];
}
