/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:55:01 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/05 14:56:13 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#define CAT "CAT"

class Cat : public Animal{
private:
    Brain *brain;
public :
    Cat();
    Cat(const Cat &oldObj);
    Cat &operator =(const Cat &oldObj);
    ~Cat();
    void makeSound() const;
};
#endif