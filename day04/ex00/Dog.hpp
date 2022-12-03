/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:18:51 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/01 11:43:44 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP
#define DOG "DOG"
#include "Animal.hpp"
class Dog : public Animal
{
	public:
	  Dog();
	  Dog(const Dog &oldObj);
	  Dog &operator =(const Dog &oldObj);
	  ~Dog();
	  void makeSound() const;
	  void s() {
		std::cout << "hey" << std::endl;
	  }
};
#endif