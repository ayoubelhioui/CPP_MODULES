 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:11:00 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/12 11:28:15 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	
#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#define CLAP_HITPOINTS 10
#define CLAP_ENERGYPOINTS 10
#define CLAP_ATTACKDAMAGE 0

class ClapTrap{
	protected:
		std::string Name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(std::string Name, int hitPoints, int attackDamage, int energyPoints);
		ClapTrap(const ClapTrap &oldObj);
		ClapTrap &operator =(const ClapTrap &oldObj);
		~ClapTrap();
		int	getHitPoints() const;
		int	getEnergyPoints() const;
		int	getAttackDamage() const;
		std::string getName() const;
		void setName(std::string value);
		void setHitPoints(int value);
		void setEnergyPoints(int value);
		void setAttackDamage(int value);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif