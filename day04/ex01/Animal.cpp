/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:13:24 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/01 10:38:46 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type(EMPTY){
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &oldObj){
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Animal &Animal::operator=(const Animal &oldObj){
	std::cout << "Animal Copy Assignement Operator Called" << std::endl;
	this->type = oldObj.type;
	return (*this);
}

void Animal::setType(std::string enteredType){
	this->type = enteredType;
}

std::string Animal::getType() const{
	return (this->type);
}

Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "MakeSound Called From Base Class" << std::endl;
}