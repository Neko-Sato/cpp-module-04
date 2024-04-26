/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:06:10 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 19:50:59 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <string>

class AMateria;

#include "ICharacter.hpp"

class AMateria {
 protected:
  std::string _type;

 public:
  AMateria(std::string const &type = "");
  AMateria(const AMateria &other);
  virtual ~AMateria(void);
  AMateria &operator=(const AMateria &other);

  std::string const &getType(void) const;
  virtual AMateria *clone(void) const = 0;
  virtual void use(ICharacter &target);
};

#endif
