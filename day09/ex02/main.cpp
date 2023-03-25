#include <sys/time.h>
# include "Pmerge.hpp"
# include <array>
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
        pmerge.printContainer("Before : ");
        struct timeval tv, tv1, tv2, tv3;
        gettimeofday(&tv, NULL);
        pmerge.sortVector();
        gettimeofday(&tv1, NULL);
        pmerge.printContainer("After  : ");
        std::cout << "Time to process a range of " << ac - 1 <<
            " elements with std::vector : "<< static_cast<float>(((tv1.tv_sec) / 1000000 + tv1.tv_usec) -
            ((tv.tv_sec) / 1000000.0 + tv.tv_usec)) << " us";
        gettimeofday(&tv2, NULL);
        pmerge.sortDeque();
        gettimeofday(&tv3, NULL);
        std::cout << "Time to process a range of " << ac - 1 <<
            " elements with std::deque : "<< static_cast<float>(((tv3.tv_sec) / 1000000 + tv3.tv_usec)
            - ((tv2.tv_sec) / 1000000.0 + tv2.tv_usec)) << " us" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}