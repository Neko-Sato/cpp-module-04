/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:26:00 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 20:00:53 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <cstring>

MateriaSource::MateriaSource(void) {
  std::memset(&_inventory, 0, sizeof(_inventory));
}

MateriaSource::MateriaSource(const MateriaSource& other) {
  for (size_t i = 0; i < MateriaSource::inventory_len; i++) {
    try {
      if (other._inventory[i])
        _inventory[i] = other._inventory[i]->clone();
      else
        _inventory[i] = NULL;
    } catch (std::bad_alloc const&) {
      while (i--)
        if (_inventory[i]) delete _inventory[i];
      throw;
    }
  }
}

MateriaSource::~MateriaSource() {
  for (size_t i = 0; i < MateriaSource::inventory_len; i++)
    if (_inventory[i]) delete _inventory[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  if (this != &other) {
    AMateria* temp[MateriaSource::inventory_len];
    for (size_t i = 0; i < MateriaSource::inventory_len; i++) {
      try {
        if (other._inventory[i])
          temp[i] = other._inventory[i]->clone();
        else
          temp[i] = NULL;
      } catch (std::bad_alloc const&) {
        while (i--)
          if (temp[i]) delete temp[i];
        throw;
      }
    }
    std::memcpy(&_inventory, &temp, sizeof(_inventory));
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
  size_t i;
  for (i = 0; i < MateriaSource::inventory_len; i++)
    if (!_inventory[i]) break;
  if (i < MateriaSource::inventory_len) _inventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  for (size_t i = 0; i < MateriaSource::inventory_len; i++) {
    if (_inventory[i] && _inventory[i]->getType() == type)
      return _inventory[i]->clone();
  }
  return NULL;
}