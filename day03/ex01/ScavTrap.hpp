/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:19:48 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/14 09:19:12 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#define SCAV_HITPOINT 100
#define SCAV_ATTACKDAMAGE 20
#define SCAV_ENERGYPOINTS 50
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
};
#endif 