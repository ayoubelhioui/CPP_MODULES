# include "Pmerge.hpp"

void    errorPrinting(const char *message)
{
    std::cout << message << std::endl;
    exit (1);
}

int main(int ac, char **av)
{
    if (ac < 3)
        errorPrinting(INVALID_ARGUMENTS);
    try{
        PMerge pmerge;
        pmerge.fillContainers(ac, av);
//        pmerge.sortWithVector();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}