/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:41:42 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/15 11:46:50 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->hitPoints = FRAG_HITPOINTS;
	this->energyPoints = FRAG_ENERGYPOINTS;
	this->attackDamage = FRAG_ATTACKDAMAGE;
	std::cout << "FragTrap Constructor called " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = FRAG_HITPOINTS;
	this->energyPoints = FRAG_ENERGYPOINTS;
	this->attackDamage = FRAG_ATTACKDAMAGE;
	std::cout << "FragTrap Paramitrized Constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target){
	if (this->energyPoints > 0)
	{
		std::cout << "FragTrap " << this->Name << " attacks " << target << " ,causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << this->Name << " doesn't have enough points to attack" << std::endl;
}

void FragTrap::highFivesGuys() const{
	std::cout << "FragTrap " << this->Name << " asks for high fives"<< std::endl;
}