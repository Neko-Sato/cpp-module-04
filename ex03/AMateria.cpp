/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:06:10 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 17:15:38 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(std::string const &type) : _type(type) {
}

AMateria::AMateria(const AMateria &other) : _type(other._type) {
}

AMateria::~AMateria(void) {
}

AMateria &AMateria::operator=(const AMateria &other) {
  if (this != &other) {
    _type = other._type;
  }
  return *this;
}

std::string const &AMateria::getType(void) const {
  return _type;
}

void AMateria::use(ICharacter &target) {
  std::cout << "* Use Materia " << _type << " for " << target.getName() << " *"
            << std::endl;
}