/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 08:22:24 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 10:11:38 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap b("issam");
	ClapTrap a("Ayoub");
	a.attack("issam");
	b.takeDamage(0);
	b.attack("ayoub");
	a.takeDamage(0);
	a.beRepaired(0);
	b.beRepaired(0);
 	return 0;
}
