/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:06:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:43:31 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Dog create" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog copy" << std::endl;
}

Dog::~Dog(void) {
  std::cout << "Dog delete " << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog assignment" << std::endl;
  Animal::operator=(other);
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Bow!!!wow!!!" << std::endl;
}
