/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:06:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:43:37 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) : Animal("Cat") {
  std::cout << "Cat create" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat copy" << std::endl;
}

Cat::~Cat(void) {
  std::cout << "Cat delete" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat assignment" << std::endl;
  Animal::operator=(other);
  return *this;
}

void Cat::makeSound(void) const {
  std::cout << "Meowoooo!!!" << std::endl;
}
