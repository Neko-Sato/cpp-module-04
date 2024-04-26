/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:06:10 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 17:27:53 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure(void) : AMateria("cure") {
}

Cure::Cure(const Cure &other) : AMateria(other) {
}

Cure::~Cure(void) {
}

Cure &Cure::operator=(const Cure &other) {
  if (this != &other) {
    AMateria::operator=(other);
  }
  return *this;
}

Cure *Cure::clone(void) const {
  return new Cure(*this);
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}