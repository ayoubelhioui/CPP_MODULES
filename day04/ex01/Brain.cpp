/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:51:32 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/04 15:15:19 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (size_t i = 0; i < 3; i++)
		this->ideas[i] = "hello";
	 
}

Brain::Brain(const Brain &oldObj){
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Brain& Brain::operator=(const Brain &oldObj){
	std::cout << "Brain Copy Assignement Operator Called" << std::endl;
	for (size_t i = 0; i < oldObj.ideas->length(); i++)
		this->ideas[i] = oldObj.ideas[i];
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain Destructor Called" << std::endl;
}