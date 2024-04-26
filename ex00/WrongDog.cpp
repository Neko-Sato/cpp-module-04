/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:06:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:43:03 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

#include <iostream>

WrongDog::WrongDog(void) : WrongAnimal("Dog") {
  std::cout << "WrongDog create" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other) {
  std::cout << "WrongDog copy" << std::endl;
}

WrongDog::~WrongDog(void) {
  std::cout << "WrongDog delete " << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other) {
  std::cout << "WrongDog assignment" << std::endl;
  WrongAnimal::operator=(other);
  return *this;
}

void WrongDog::makeSound(void) const {
  std::cout << "Bow!!!wow!!!" << std::endl;
}
