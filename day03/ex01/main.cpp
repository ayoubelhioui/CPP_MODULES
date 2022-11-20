/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:19:36 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 08:33:18 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("ayoub");
	std::cout << a.getAttackDamage() << std::endl;
	a.attack("unknown");
	a.takeDamage(5);
	a.guardGate();
	ScavTrap b(a);
	b.attack("unknown");
	b.takeDamage(4);
	b.beRepaired(20);
	ScavTrap c = b;
	std::cout << c.getName() << std::endl;
	c.attack("unknown");
}