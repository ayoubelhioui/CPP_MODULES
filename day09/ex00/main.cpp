# include "BitcoinExchange.hpp"

void errorPrinting(const char *message) {
    std::cout << message << std::endl;
    exit (1);
}

int main(int ac, char **av)
{
    if (ac > 2)
        errorPrinting(INVALID_ARGUMENTS);
    try{
        BitcoinExchange bitcoin(av[1]);
        bitcoin.prepareForExchanging();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}