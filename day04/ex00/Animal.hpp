/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:14:16 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/27 11:14:56 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP
#define EMPTY ""
#include <iostream>

class Animal{
	protected :
		std::string type;
	public :
	  Animal();
	  Animal(const Animal &oldObj);
	  Animal &operator =(const Animal &oldObj);
	  ~Animal();
	  std::string getType() const;
      void setType(std::string enteredType);
	  void makeSound() const;
};
#endif