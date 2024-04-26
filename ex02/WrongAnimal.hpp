/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:54:59 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 14:39:10 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <string>

class WrongAnimal {
 protected:
  std::string _type;

 public:
  WrongAnimal(std::string type = "");
  WrongAnimal(const WrongAnimal &other);
  virtual ~WrongAnimal(void);
  virtual WrongAnimal &operator=(const WrongAnimal &other);

  void makeSound(void) const;
  std::string getType(void) const;
};

#endif
