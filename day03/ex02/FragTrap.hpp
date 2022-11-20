/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:44:11 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 09:48:15 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#define FRAG_HITPOINTS 100
#define FRAG_ENERGYPOINTS 100
#define FRAG_ATTACKDAMAGE 30
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &oldObj);
		FragTrap &operator =(const FragTrap &oldObj);
		~FragTrap();
		void attack(const std::string &target);
		void highFivesGuys() const;
};
#endif