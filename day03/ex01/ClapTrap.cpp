#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(HITPOINTS),  energyPoints(ENERGYPOINTS), attackDamage(ATTACKDAMAGE){
	std::cout << "Construddctor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oldObj){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = oldObj;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor Called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : Name(name), hitPoints(HITPOINTS),  energyPoints(ENERGYPOINTS), attackDamage(ATTACKDAMAGE){
	std::cout << "Paramiterized Constructor Called" << std::endl;
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
	setAttackDamage(oldObj.getAttackDamage());
	setHitPoints(oldObj.getHitPoints());
	setEnergyPoints(oldObj.getEnergyPoints());
	setName(oldObj.getName());
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
		std::cout << "clapTrap " << this->Name << " attacks " << target << " ,causing " << this->getAttackDamage() << " points of damage" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
		std::cout << this->Name << " soesn't have enough points to attack" << std::endl;
}