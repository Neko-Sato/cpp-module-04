/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:06:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 15:29:29 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
  std::cout << "WrongCat create" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  std::cout << "WrongCat copy" << std::endl;
}

WrongCat::~WrongCat(void) {
  std::cout << "WrongCat delete" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  if (this != &other) {
    std::cout << "WrongCat assignment" << std::endl;
    WrongAnimal::operator=(other);
  } else
    std::cout << "Warning: self-assignment" << std::endl;
  return *this;
}

void WrongCat::makeSound(void) const {
  std::cout << "Meowoooo!!!" << std::endl;
}
