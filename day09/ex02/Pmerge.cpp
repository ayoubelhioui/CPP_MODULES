
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


void    PMerge::_merge(int start, int end, int middle) {
    int l = start, m = middle + 1, size = end - start + 1, resultIndex = 0;
    std::vector<int> result(size, 0);
    while (l <= middle and m <= end)
        result[resultIndex++] = (this->_firstContainer[l] < this->_firstContainer[m]) ? this->_firstContainer[l++] : this->_firstContainer[m++];
    while (l <= middle)
        result[resultIndex++] = this->_firstContainer[l++];
    while (m <= end)
        result[resultIndex++] = this->_firstContainer[m++];
    for (int i = 0; i < size; i++)
        this->_firstContainer[i + start] = result[i];
}

void    PMerge::_insertionSort(int start, int end) {
    for (int i = start + 1; i < end; i++)
    {
        int x = i - 1;
        int save = this->_firstContainer[i];
        while (x >= 0 and this->_firstContainer[x] > save)
        {
            this->_firstContainer[x + 1] = this->_firstContainer[x];
            x--;
        }
        this->_firstContainer[x + 1] = save;
    }
}

void    PMerge::printContainer( void ) {
    for (unsigned int i = 0; i < _firstContainer.size(); i++)
        std::cout  << this->_firstContainer[i] << std::endl;
}

void    PMerge::_mergeSort(int start, int end) {
    if (end - start <= 20)
    {
        this->_insertionSort(start, end);
        return ;
    }
    int middle = (start + end) / 2;
    this->_mergeSort(start, middle);
    this->_mergeSort(middle + 1, end);
    this->_merge(start, end, middle);
}

void    PMerge::sortWithVector( void ) {
    this->_mergeSort(0, this->_firstContainer.size());
}
