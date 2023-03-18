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

}