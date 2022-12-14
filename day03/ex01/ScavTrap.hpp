/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:19:48 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 09:57:53 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#define SCAV_HITPOINT 100
#define SCAV_ENERGYPOINTS 50
#define SCAV_ATTACKDAMAGE 20
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public :
		ScavTrap();
		ScavTrap(const ScavTrap &oldObj);
		ScavTrap &operator=(const ScavTrap &oldObj);
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate() const;
		void attack (const std::string &target);
};
#endif