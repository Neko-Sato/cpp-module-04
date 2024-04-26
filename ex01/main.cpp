/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:19:15 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 22:24:26 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  Animal *animals[20];
  size_t size = sizeof(animals) / sizeof(*animals);

  for (size_t i = 0; i < size; i++) {
    if (i % 2)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }
  animals[0]->makeSound();
  for (size_t i = 0; i < size; i++) delete animals[i];
}