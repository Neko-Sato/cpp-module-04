/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:42:44 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 19:55:44 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __Character_HPP__
#define __Character_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
 public:
  static const int inventory_len = 4;

 private:
  std::string _name;
  AMateria* _inventory[inventory_len];

 public:
  Character(std::string name = "");
  Character(const Character& other);
  ~Character();
  Character& operator=(const Character& other);

  std::string const& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif
