/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:13:09 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/04 10:24:45 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
//    const Animal* meta = new Animal();
//    const Animal* j = new Dog();
//    const Animal* i = new Cat();
    const WrongAnimal *meta1= new WrongAnimal();
    const WrongAnimal *i1 = new WrongCat();
////    std::cout << i->getType() << " " << std::endl;
////    std::cout << j->getType() << " " << std::endl;
//    j->makeSound();
//    i->makeSound(); //will output the cat sound!
    meta1->makeSound();
    i1->makeSound();
//    meta->makeSound();
    delete meta1;
    delete i1;
//    delete meta;
//    delete i;
//    delete j;
    return (0);
}

