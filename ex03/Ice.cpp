/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:06:10 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 17:25:45 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice(void) : AMateria("ice") {
}

Ice::Ice(const Ice &other) : AMateria(other) {
}

Ice::~Ice(void) {
}

Ice &Ice::operator=(const Ice &other) {
  if (this != &other) {
    AMateria::operator=(other);
  }
  return *this;
}

Ice *Ice::clone(void) const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}