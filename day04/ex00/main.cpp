/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:13:09 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/27 11:49:11 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


class a
{
    public:
        void eat() { std::cout << "I'm eating generic food."; }
};

class c : public Animal
{
    public:
        void eat() { std::cout << "I'm eating a rat."; }
};
void func(a *xyz) { xyz->eat();};
int main()
{
	// const Dog* meta = new Dog();
	// std::cout << meta->getType() << std::endl;
	// meta->makeSound();
	// delete meta;
}