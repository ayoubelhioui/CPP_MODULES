/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:06:27 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/03 14:33:09 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL_HPP
#define __WRONG_ANIMAL_HPP
#define EMPTY ""
#include <iostream>

class WrongAnimal{
	protected :
		std::string _type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &oldObj);
		WrongAnimal &operator =(const WrongAnimal &oldObj);
		~WrongAnimal();
	  	std::string getType() const;
      	void setType(std::string enteredType);
	  	void makeSound() const;
};
#endif