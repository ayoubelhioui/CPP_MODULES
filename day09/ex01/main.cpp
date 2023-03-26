# include "RPN.hpp"

void    errorPrinting(const char *message){
    std::cout << message << std::endl;
    exit (1);
}

bool isNumber(std::string &currentValue)
{
    for (size_t i = 0; i < currentValue.size(); i++)
        if (!isdigit((currentValue[i])))
            return (false);
    return (true);
}

int main(int ac, char **av)
{
    if (ac == 1)
        errorPrinting(INVALID_ARGUMENTS);
    try
    {
        RPN rpn;
        std::stringstream str((std::string(av[1])));
        std::string currentValue;
        while (str >> currentValue)
        {
            if (currentValue == PLUS or currentValue == MINUS or currentValue == DIVIDE or currentValue == MULTIPLY)
                rpn.performOperation(currentValue);
            else if (isNumber(currentValue))
                for (size_t i = 0; i < currentValue.size(); i++)
                    rpn.dataHolder.push(currentValue[i] - '0');
            else
                throw (std::runtime_error("Error"));
        }
        std::cout << rpn.dataHolder.top() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}