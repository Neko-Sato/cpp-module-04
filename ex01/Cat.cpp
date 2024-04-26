/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:06:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 15:50:20 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) : Animal("Cat") {
  std::cout << "Cat create" << std::endl;
  _brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat copy" << std::endl;
  _brain = new Brain(*other._brain);
}

Cat::~Cat(void) {
  std::cout << "Cat delete" << std::endl;
  delete _brain;
}

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    std::cout << "Cat assignment" << std::endl;
    Animal::operator=(other);
    *_brain = *other._brain;
  }
  return *this;
}

void Cat::makeSound(void) const {
  std::cout << "Meowoooo!!!" << std::endl;
}
