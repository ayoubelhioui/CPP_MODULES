/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:30:48 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/17 09:16:47 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	hitPoints = SCAV_HITPOINT;
	attackDamage = SCAV_ATTACKDAMAGE;
	energyPoints = SCAV_ENERGYPOINTS;
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	hitPoints = SCAV_HITPOINT;
	energyPoints = SCAV_ENERGYPOINTS;
	attackDamage = SCAV_ATTACKDAMAGE;
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