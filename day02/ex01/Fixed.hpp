/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:49:22 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/03 15:26:37 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#define CANT_SHIFT 256

class Fixed{
    private:
        int rawBits;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int data);
        Fixed(const Fixed &oldObj);
        Fixed(const float data);
        ~Fixed();
        Fixed &operator= (const Fixed &oldObj);
        int getRawBits() const ;
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits(int const raw);
};
std::ostream& operator<< (std::ostream &ost, const Fixed &fixed);
#endif