/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:54:59 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 16:02:56 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>

class Animal {
 protected:
  std::string _type;

 public:
  Animal(std::string type = "");
  Animal(const Animal &other);
  virtual ~Animal(void);
  virtual Animal &operator=(const Animal &other);

  virtual void makeSound(void) const = 0;
  std::string getType(void) const;
};

#endif
