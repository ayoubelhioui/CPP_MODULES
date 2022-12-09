/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:57:09 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/05 15:06:50 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
int main()
{
//    Animal a;
    Animal *a = new Cat();
    Animal *a1 = new Dog();
    a->makeSound();
    a1->makeSound();
//    Dog d;
//    Dog c(d);
//    Cat b;
//    Cat x;
//    x = b;
//    d.makeSound();
//    d.makeSound();
//    x.makeSound();
//    b.makeSound();
}