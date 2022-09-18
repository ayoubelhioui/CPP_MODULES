#include "Harl.hpp"


int main(int ac, char **av){

    Harl harl;
    std::string s[4] = {"DEBUG", "ERROR", "WARNING", "INFO"};
    int index = ((av[1] == s[0]) * 0) + ((av[1] == s[1]) * 1) + ((av[1] == s[2]) * 2) + ((av[1] == s[3]) * 3);
    if(index == 0 && av[1] != s[0])
        index = -1;
    if (ac > 1)
    {
        switch (index) {
            case 0:
                harl.printing(index);
                break;
            case 1:
                harl.printing(index);
                break;
            case 2:
                harl.printing(index);
                break;
            case 3:
                harl.printing(index);
                break;
            default:
                std::cout << "Enter a valid word" << std::endl;
        }
    }
}
