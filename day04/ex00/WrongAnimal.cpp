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

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type(EMPTY){
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oldObj){
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = oldObj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oldObj){
	std::cout << "WrongAnimal Copy Assignement Operator Called" << std::endl;
	this->type = oldObj.type;
	return (*this);
}

void WrongAnimal::setType(std::string enteredType){
	this->type = enteredType;
}

std::string WrongAnimal::getType() const{
	return (this->type);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "MakeSound Called From Base Class" << std::endl;
}