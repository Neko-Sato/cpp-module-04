/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:39:16 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 15:09:48 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>

class Brain {
 private:
  std::string _idea[100];

 public:
  Brain(void);
  Brain(const Brain &other);
  ~Brain(void);
  Brain &operator=(const Brain &other);
};

#endif
