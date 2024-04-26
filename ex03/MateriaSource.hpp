/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:18:53 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 19:56:11 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
  static const int inventory_len = 4;

 private:
  AMateria* _inventory[inventory_len];

 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource& other);
  ~MateriaSource();
  MateriaSource& operator=(const MateriaSource& other);

  void learnMateria(AMateria* m);
  AMateria* createMateria(std::string const& type);
};

#endif