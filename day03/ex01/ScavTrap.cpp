/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:30:48 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/14 11:46:35 by ael-hiou         ###   ########.fr       */
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
	attackDamage = SCAV_ATTACKDAMAGE;
	energyPoints = SCAV_ENERGYPOINTS;
	std::cout << "ScavTrap Paramitrized Constructor Called" << std::endl;
}

ScavTrap:: ~ScavTrap(){
	std::cout << "ScavTrap Destructor Called" << std::endl;
}