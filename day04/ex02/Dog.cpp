/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:55:05 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/05 14:56:29 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->brain = new Brain();
	this->type = DOG;
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &oldObj){
    this->brain = new Brain();
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Dog &Dog::operator=(const Dog &oldObj){
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	this->type = oldObj.type;
    *this->brain = *oldObj.brain;
	return (*this);
}

Dog::~Dog(){
    delete this->brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog sound: 🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶 " << std::endl;
}