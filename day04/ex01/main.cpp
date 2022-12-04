/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:13:09 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/04 18:06:32 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
    Animal *animals[4];
    for(int i = 0; i < 4; i++)
    {
        if (i % 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        animals[i]->makeSound();
        delete animals[i];
    }
    //////////////////////////////////
    Dog a;
    Dog v;

    a = v;
    //////////////////////////////////
    
    system("leaks brain");
    // while(1);
    return 0;
}



// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;
// }