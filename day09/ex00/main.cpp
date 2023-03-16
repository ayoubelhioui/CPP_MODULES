# include "BitcoinExchange.hpp"

void errorPrinting(const char *message) {
    std::cout << message << std::endl;
    exit (1);
}

//void open
int main(int ac, char **av)
{
    (void) av;
    if (ac != 2)
        errorPrinting(INVALID_ARGUMENTS);
    try{
        BitcoinExchange bitcoin(av[1]);
        bitcoin.prepareForExchanging();
    }
    catch(std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
//    std::map<std::string, std::string> test;
//    test["2011-01-01"] = "3";
//    test["2011-01-04"] = "4";
//    std::map<std::string, std::string>::iterator m = test.begin();
//    while (m != test.end())
//    {
//        std::cout << "the first is : " << m->first << std::endl;
//        std::cout << "the second is : " << m->second << std::endl;
//        m++;
//    }
//    std::map<std::string, std::string>::iterator m1 = test.lower_bound("2011-01-03");
//    m1--;
//    std::cout << "the lower bound is " << m1->second << std::endl;
    return (EXIT_SUCCESS);
}