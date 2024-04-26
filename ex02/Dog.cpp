/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:06:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 15:55:07 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Dog create" << std::endl;
  _brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog copy" << std::endl;
  _brain = new Brain(*other._brain);
}

Dog::~Dog(void) {
  std::cout << "Dog delete " << std::endl;
  delete _brain;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    std::cout << "Dog assignment" << std::endl;
    Animal::operator=(other);
    *_brain = *other._brain;
  }
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Bow!!!wow!!!" << std::endl;
}
