/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:19:15 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/26 22:24:03 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
//   Animal *poteto = new Animal("poteto");
  Animal *cat = new Cat();
  Animal *dog = new Dog();
//   delete poteto;
  delete cat;
  delete dog;
}