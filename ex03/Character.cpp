/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:34:48 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 19:58:04 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <cstring>

Character::Character(std::string name) : _name(name) {
  std::memset(&_inventory, 0, sizeof(_inventory));
}

Character::Character(const Character &other) : _name(other._name) {
  for (size_t i = 0; i < Character::inventory_len; i++) {
    try {
      if (other._inventory[i])
        _inventory[i] = other._inventory[i]->clone();
      else
        _inventory[i] = NULL;
    } catch (std::bad_alloc const &) {
      while (i--)
        if (_inventory[i]) delete _inventory[i];
      throw;
    }
  }
}

Character::~Character() {
  for (size_t i = 0; i < Character::inventory_len; i++)
    if (_inventory[i]) delete _inventory[i];
}

Character &Character::operator=(const Character &other) {
  if (this != &other) {
    AMateria *temp[Character::inventory_len];
    for (size_t i = 0; i < Character::inventory_len; i++) {
      try {
        if (other._inventory[i])
          temp[i] = other._inventory[i]->clone();
        else
          temp[i] = NULL;
      } catch (std::bad_alloc const &) {
        while (i--)
          if (temp[i]) delete temp[i];
        throw;
      }
    }
    _name = other._name;
    std::memcpy(&_inventory, &temp, sizeof(_inventory));
  }
  return *this;
}

std::string const &Character::getName() const {
  return _name;
}

void Character::equip(AMateria *m) {
  size_t i;
  for (i = 0; i < Character::inventory_len; i++)
    if (!_inventory[i]) break;
  if (i < Character::inventory_len) _inventory[i] = m;
}

void Character::unequip(int idx) {
  if (idx < Character::inventory_len) _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
  if (idx < Character::inventory_len && _inventory[idx])
    _inventory[idx]->use(target);
}