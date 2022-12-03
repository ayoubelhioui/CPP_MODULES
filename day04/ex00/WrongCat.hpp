/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:18:03 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/03 14:22:00 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_CAT_HPP
#define __WRONG_CAT_HPP
#include "WrongAnimal.hpp"
#define WrongCAT "WRONGCAT"
class WrongCat : public WrongAnimal{
	public :
	  WrongCat();
	  WrongCat(const WrongCat &oldObj);
	  WrongCat &operator =(const WrongCat &oldObj);
	  ~WrongCat();
	  void makeSound() const;
};
#endif