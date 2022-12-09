/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:55:07 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/05 15:04:30 by ael-hiou         ###   ########.fr       */
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
		virtual ~Animal();
	  	std::string getType() const;
      	void setType(std::string enteredType);
	  	virtual void makeSound() const = 0;
};
#endif