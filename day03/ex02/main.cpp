/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:59:35 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 18:27:08 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <vector>
using namespace std;
class base{
protected :
    int a;
    int b;
public :
	base() : a(10), b(-10){
    std::cout << "BASE" << std::endl;
};
    base(int a1, int b1) : a(a1), b(b1){
        std::cout << "BASE" << std::endl;
    };
};

class derived : public base{
private :
    int c;
public :
	derived()  : base(5,9), c(10){
    std::cout << c << std::endl;
    std::cout << "DERIVED" << std::endl;
}
};
int main()
{
    derived d;
}