/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:22:40 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/04 15:18:22 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->brain = new Brain();
	this->type = CAT;
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &oldObj){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Cat& Cat::operator =(const Cat &oldObj){
	std::cout << "Cat Copy Assignement Operator Called" << std::endl;
	this->type = oldObj.type;
	return (*this);
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat sound: 🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱" << std::endl;
}