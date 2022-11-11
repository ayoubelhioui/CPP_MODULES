/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:50:30 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/10 12:53:52 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#define ZERO 0
#include <iostream>

class Fixed{
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &oldObj);
    ~Fixed();
    Fixed &operator= (const Fixed &oldObj);
    int getRawBits() const ;
    void setRawBits(int const raw);
};
#endif
