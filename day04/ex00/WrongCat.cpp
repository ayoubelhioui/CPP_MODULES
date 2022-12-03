/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:22:28 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/03 14:47:01 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = WrongCAT;
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &oldObj){
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = oldObj;
}

WrongCat& WrongCat::operator =(const WrongCat &oldObj){
	std::cout << "WrongCat Copy Assignement Operator Called" << std::endl;
	this->type = oldObj.type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Cat sound: 🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱" << std::endl;
}