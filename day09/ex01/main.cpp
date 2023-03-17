# include "RPN.hpp"

void    errorPrinting(const char *message){
    std::cout << message << std::endl;
    exit (1);
}
int main(int ac, char **av)
{
    if (ac == 1)
        errorPrinting(INVALID_ARGUMENTS);
    try
    {
        RPN rpn;
        std::cout << av[i] << std::endl;
        char *currentValue = av[i];
        if (!strcmp(currentValue, PLUS) or !strcmp(currentValue, MINUS) or !strcmp(currentValue, DIVIDE) or !strcmp(currentValue, MULTIPLY))
            rpn.performOperation(currentValue);
        else if (isnumber(atoi(currentValue)))
        {
            std::cout << "im here" << std::endl;
            rpn._dataHolder.push(atoi(currentValue));
        }
        else
            throw (std::runtime_error("You entered an invalid character"));
        std::cout << rpn._dataHolder.top() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}