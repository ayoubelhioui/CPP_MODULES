/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:18:03 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/29 08:37:43 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"
#define CAT "CAT"

class Cat : public Animal{
	public :
	  Cat();
	  Cat(const Cat &oldObj);
	  Cat &operator =(const Cat &oldObj);
	  ~Cat();
	  void makeSound() const;
};
#endif