/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:41:12 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 15:33:20 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain(void) {
  std::cout << "Brain create" << std::endl;
}

Brain::Brain(const Brain &other) {
  std::cout << "Brain copy" << std::endl;
  for (size_t i = 0; i < 100; i++) _idea[i] = other._idea[i];
}

Brain::~Brain(void) {
  std::cout << "Brain delete" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
  if (this != &other) {
    std::cout << "Brain assignment" << std::endl;
    for (size_t i = 0; i < 100; i++) _idea[i] = other._idea[i];
  }
  return *this;
}
