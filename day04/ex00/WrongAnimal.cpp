/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:14:48 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/03 14:22:15 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type(EMPTY){
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oldObj){
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = oldObj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oldObj){
	std::cout << "WrongAnimal Copy Assignment Operator Called" << std::endl;
	this->_type = oldObj._type;
	return (*this);
}

void WrongAnimal::setType(std::string enteredType){
	this->_type = enteredType;
}

std::string WrongAnimal::getType() const{
	return (this->_type);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "MakeSound Called From Base Class" << std::endl;
}