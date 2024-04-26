/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:14:42 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:31:42 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
#define __DOG_HPP__

#include <string>

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog& other);
  ~Dog(void);
  Dog& operator=(const Dog& other);

  void makeSound(void) const;
};

#endif
