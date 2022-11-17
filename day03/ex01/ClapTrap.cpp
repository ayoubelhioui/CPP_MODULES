/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:50:45 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/17 09:16:12 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(CLAP_HITPOINTS),  energyPoints(CLAP_ENERGYPOINTS), attackDamage(CLAP_ATTACKDAMAGE){
	std::cout << "Construddctor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oldObj){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = oldObj;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), hitPoints(CLAP_HITPOINTS),  energyPoints(CLAP_ENERGYPOINTS), attackDamage(CLAP_ATTACKDAMAGE){
	std::cout << "ClapTrap Paramiterized Constructor Called" << std::endl;
};

void ClapTrap::setAttackDamage(int value){
	this->attackDamage = value;
}

void ClapTrap::setEnergyPoints(int value){
	this->energyPoints = value;
}

void ClapTrap::setHitPoints(int value){
	this->hitPoints = value;
}

void ClapTrap::setName(std::string value){
	this->Name = value;
}

int ClapTrap::getAttackDamage() const{
	return (this->attackDamage);
}

int ClapTrap::getEnergyPoints() const{
	return (this->energyPoints);
}

int ClapTrap::getHitPoints() const{
	return (this->hitPoints);
}

std::string ClapTrap::getName() const{
	return (this->Name);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &oldObj){
	std::cout << "Copy Assignement Operator Called" << std::endl;
	this->attackDamage = oldObj.attackDamage;
	this->hitPoints = oldObj.hitPoints;
	this->energyPoints = oldObj.energyPoints;
	this->Name = oldObj.Name;
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->Name << " took " << amount << " of damage" << std::endl;
	this->setHitPoints(getHitPoints() - amount);
}

void ClapTrap::beRapaired(unsigned int amount){
	std::cout << this->Name << " repaired himself" << std::endl;
	if (this->getEnergyPoints() > 0)
	{
		this->setHitPoints(this->getHitPoints() + amount);
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->Name << " doesn't have enough points to repair" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << " ,causing " << this->getAttackDamage() << " points of damage" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->Name << " doesn't have enough points to attack" << std::endl;
}