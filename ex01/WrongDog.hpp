/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:14:42 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:44:19 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGDOG_HPP__
#define __WRONGDOG_HPP__

#include <string>

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
 public:
  WrongDog(void);
  WrongDog(const WrongDog& other);
  ~WrongDog(void);
  WrongDog& operator=(const WrongDog& other);

  void makeSound(void) const;
};

#endif
