#include "Fixed.hpp"

class test{
    private:
        int value;
    public:
        test(){
            print();
            std::cout << "constructor calleed" << std::endl;
        }
        int getValue(){return value;}
        void setValue(int v){value = v;}
        void    print(){
            std::cout <<  getValue() << std::endl;
        }
};

int main( void ) {
    test a;
    a.setValue(-100);
    // Fixed a;
    // Fixed b( a );
    // Fixed c;
    // c = b;
    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;
    // return 0;
}