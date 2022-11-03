#include <iostream>
class a{
private:
    int value;    
public:
    a(){
        std::cout << "constructor called" << std::endl;
    };
    a(int v):value(v){
        std::cout << "paramitrized constructor called" << std::endl;
    };
    int getValue(){
        return (this->value);
    }
    a operator=(const a &oldObj)
    {
        this->value = oldObj.value;
        return (*this);
    }
};

void    swap(int *a, int *b)
{
    // std::cout << (*)
    *a = (*a)^(*b);
    *b = (*a)^(*b);
    *a = (*a) ^ (*b);
}
int main( void ) {
    // std::cout << b << std::endl;
    // a v(20);
    // a b;
    // a c;
    // c = b = v;
    std::cout << b.getValue() << std::endl;
    std::cout << c.getValue() << std::endl;
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}