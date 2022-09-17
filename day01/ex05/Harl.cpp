#include "Harl.hpp"

void    Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){
    std::string s[4] = {"debug", "error", "warning", "info"};
    void (Harl::*memFn[4])(void) = {&Harl::debug, &Harl::error, &Harl::warning, &Harl::info};
    int index = ((level == s[0]) * 0) + ((level == s[1]) * 1) + ((level == s[2]) * 2) + ((level == s[3]) * 3);
    if(index == 0 && level != s[0])
    {
        std::cout << "enter valid word" << std::endl;
        return ;
    }
    (this->*memFn[index])();
}