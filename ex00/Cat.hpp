/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:07:02 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:17:39 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include <string>

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat& other);
  ~Cat(void);
  Cat& operator=(const Cat& other);

  void makeSound(void) const;
};

#endif
