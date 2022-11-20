/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:59:35 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 09:53:41 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a("ayoub");
    a.attack("unknown");
    a.takeDamage(5);
    FragTrap b = a;
    b.attack("helloWorld");
    b.highFivesGuys();
    FragTrap j(a);
    std::cout<<j.getName()<<std::endl;
}