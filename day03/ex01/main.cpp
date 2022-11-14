/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:19:36 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/14 11:46:09 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
// class test : public ScavTrap{
	
// };
// class test1{
// 	private:
// 		int b;
// 	public :
// 		int a;
// 	  test1() :b(20), a(10){};
// };
// class test : public test1{

// 	public :
// 		test(){};
// };
int main()
{
	ScavTrap s("helloWorld");
	std::cout << s.getName() << s.getHitPoints()  << std::endl;
}