/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:54:59 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 15:32:45 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
  std::cout << "WrongAnimal create " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
  std::cout << "WrongAnimal copy " << _type << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal delete " << _type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  if (this != &other) {
    std::cout << "WrongAnimal assignment " << _type << std::endl;
    _type = other._type;
  }
  return *this;
}

void WrongAnimal::makeSound(void) const {
  std::cout << "This wrong_animal don't make sounds." << std::endl;
}

std::string WrongAnimal::getType(void) const {
  return _type;
}
