/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:17:41 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/04 18:19:42 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	this->brain = new Brain();
	this->type = DOG;
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &oldObj){
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Dog &Dog::operator=(const Dog &oldObj){
	Brain *newBrain = new Brain();
	std::cout << "Dog Copy Assignement Operator Called" << std::endl;
	this->type = oldObj.type;
	this->brain = oldObj.brain;
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const{
	std::cout << "Dog sound: 🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶 " << std::endl;
}