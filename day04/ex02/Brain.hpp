/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:34:50 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/12/05 13:14:19 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP
#define __BRAIN_HPP
#include <iostream>
class Brain{
	public :
		std::string ideas[100];
	public :
	  Brain();
	  Brain(const Brain &oldObj);
	  Brain &operator =(const Brain &oldObj);
	  ~Brain();
};
#endif