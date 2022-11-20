/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:30:48 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 10:06:43 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->hitPoints = SCAV_HITPOINT;
	this->attackDamage = SCAV_ATTACKDAMAGE;
	this->energyPoints = SCAV_ENERGYPOINTS;
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &oldObj){
	this->Name = oldObj.Name;
	this->hitPoints = oldObj.hitPoints;
	this->energyPoints = oldObj.energyPoints;
	this->attackDamage = oldObj.attackDamage;
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &oldObj){
	this->Name = oldObj.Name;
	this->hitPoints = oldObj.hitPoints;
	this->energyPoints = oldObj.energyPoints;
	this->attackDamage = oldObj.attackDamage;
	std::cout << "ScavTrap Copy Assignement Called" << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, SCAV_HITPOINT, SCAV_ENERGYPOINTS, SCAV_ATTACKDAMAGE){
	std::cout << "ScavTrap Paramitrized Constructor Called" << std::endl;
}

ScavTrap:: ~ScavTrap(){
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
	if (this->energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << " ,causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << this->Name << " doesn't have enough points to attack" << std::endl;
}

void ScavTrap::guardGate() const{
	std::cout << this->Name << " is now in Gate keeper mode" << std::endl;
}