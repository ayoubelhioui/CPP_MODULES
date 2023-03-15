# include "BitcoinExchange.hpp"

void errorPrinting(const char *message) { std::cout << message << std::endl; }

int main(int ac, char **av)
{
    if (ac != 2)
        errorPrinting(INVALID_ARGUMENTS);
    return (EXIT_SUCCESS);
}