#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl{
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
    typedef void (Harl::*memFn)(void);
    void    complain(std::string level);
};
#endif