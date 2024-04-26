/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:54:59 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 15:32:26 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal(std::string type) : _type(type) {
  std::cout << "Animal create " << _type << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) {
  std::cout << "Animal copy " << _type << std::endl;
}

Animal::~Animal(void) {
  std::cout << "Animal delete " << _type << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
  if (this != &other) {
    std::cout << "Animal assignment " << _type << std::endl;
    _type = other._type;
  }
  return *this;
}

void Animal::makeSound(void) const {
  std::cout << "This animal don't make sounds." << std::endl;
}

std::string Animal::getType(void) const {
  return _type;
}
