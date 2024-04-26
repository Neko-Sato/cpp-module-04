/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:06:10 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 19:41:59 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __Cure_HPP__
#define __Cure_HPP__

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure(void);
  Cure(const Cure &other);
  ~Cure(void);
  Cure &operator=(const Cure &other);

  Cure *clone(void) const;
  void use(ICharacter &target);
};

#endif
