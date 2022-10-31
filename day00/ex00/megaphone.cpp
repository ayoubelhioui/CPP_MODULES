/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:58:41 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/10/03 16:11:26 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int ac, char **av)
{ 
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
			std::cout << char(toupper(av[i][j]));
	}
    std::cout << std::endl;
}
