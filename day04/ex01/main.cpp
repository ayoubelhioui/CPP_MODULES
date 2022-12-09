/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:13:09 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/05 14:50:54 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
//     Animal *animals[4];
//     for(int i = 0; i < 4; i++)
//     {
//         if (i % 2)
//             animals[i] = new  Cat();
//         else
//             animals[i] = new Dog();
//         animals[i]->makeSound();
//         delete animals[i];
////     }
     Dog basic;
     {
         Dog tmp = basic;
     }
    //////////////////////////////////
    Dog a;
    Dog v(a);

//    //////////////////////////////////
//    system("leaks brain");
    return 0;
}