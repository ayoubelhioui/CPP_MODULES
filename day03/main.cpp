/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 08:22:24 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/12 11:42:55 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Ayoub");
	ClapTrap b("issam");

	a.attack("issam");
	b.takeDamage(0);
	b.attack("ayoub");
	a.takeDamage(0);
	a.beRapaired(0);
	b.beRapaired(0);
	{
		ClapTrap c;
		ClapTrap d(c);
	}
 	return 0;
}
