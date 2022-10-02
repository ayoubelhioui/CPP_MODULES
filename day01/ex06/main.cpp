#include "Harl.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    Harl harl;
    std::string level = av[1];
    std::string s[4] = {"DEBUG", "ERROR", "WARNING", "INFO"};
    int index = ((level == s[0]) * 0) + ((level == s[1]) * 1) + ((level == s[2]) * 2) + ((level == s[3]) * 3);
    if(index == 0 && level != s[0])
        index = -1;
    switch (index) {
        case 0:
            harl.printing(index);break;
        case 1:
             harl.printing(index);break;
        case 2:
            harl.printing(index);break;
        case 3:
            harl.printing(index);break;
        default:
            std::cout << "Enter a valid word" << std::endl;
    }
}
