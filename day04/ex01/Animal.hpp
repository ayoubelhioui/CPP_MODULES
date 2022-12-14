/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:14:16 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/04 15:16:53 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP
#define EMPTY ""
#include <iostream>
#include "Brain.hpp"
class Animal{
	protected :
		std::string _type;
	public :
		Animal();
		Animal(const Animal &oldObj);
		Animal &operator =(const Animal &oldObj);
		virtual ~Animal();
	  	std::string getType() const;
      	void setType(std::string enteredType);
	  	virtual void makeSound() const;
};
#endif