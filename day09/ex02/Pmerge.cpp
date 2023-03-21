
# include "Pmerge.hpp"
PMerge::PMerge() { }

PMerge::PMerge(const PMerge &oldObj) {
    *this = oldObj;
}

PMerge &PMerge::operator=(const PMerge &oldObj) {
    this->_firstContainer = oldObj._firstContainer;
    this->_secondContainer = oldObj._secondContainer;
    return (*this);
}

PMerge::~PMerge() { }

void    PMerge::fillContainers(int ac, char **av) {
    for (int i = 1; i < ac; i++)
    {
        std::string number(av[i]);
        if (!isdigit(number[0]))
            throw ("You entered an invalid argument.");
        int trueNumber = std::stoi(av[i]);
        this->_firstContainer.push_back(trueNumber);
        this->_secondContainer.push_back(trueNumber);
    }
}

void    PMerge::_insertionSort( std::vector<int> &data) {
    for (unsigned int i = 1; i < data.size(); i++)
    {
        int x = i - 1;
        int save = data[i];
        while (x >= 0 and data[x] > save)
        {
            data[x + 1] = data[x];
            x--;
        }
        data[x + 1] = save;
    }
}

void    PMerge::printContainer( void ) {
    for (unsigned int i = 0; i < _firstContainer.size(); i++)
        std::cout  << this->_firstContainer[i] << std::endl;
}

void    PMerge::_mergeSort( std::vector<int> &data ) {
    if (data.size() <= 20)
    {
        this->_insertionSort(data);
        return ;
    }
    int middle = (data.size()) / 2;
    std::vector<int> firstPart(data.begin(), data.begin() + middle);
    std::vector<int> secondPart(data.begin() + middle, data.end());
    this->_mergeSort(firstPart);
    this->_mergeSort(secondPart);
    std::merge(firstPart.begin(), firstPart.end(), secondPart.begin(), secondPart.end(), data.begin());
}

void    PMerge::sortWithVector( void ) {
    this->_mergeSort(this->_firstContainer);
}
