
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
        int trueNumber = atoi(av[i]);
        this->_firstContainer.push_back(trueNumber);
        this->_secondContainer.push_back(trueNumber);
    }
}

void    PMerge::printContainer( std::string message ) {
    std::cout << message;
    for (unsigned int i = 0; i < _firstContainer.size(); i++)
        std::cout  << this->_firstContainer[i] << " ";
    std::cout << std::endl;
}

bool    sortBySecond(std::pair<int, int> p1, std::pair<int, int> p2){
    return (p1.second < p2.second);
}

void    PMerge::sortDeque( void ) {
    std::deque<std::pair<int, int> > pairs;
    std::deque<int> S;
    std::deque<int> pend;
    std::cout << std::endl;
    if ((this->_secondContainer.size() % 2))
        pend.push_back(this->_secondContainer.back());
    for (size_t i = 1; i < this->_secondContainer.size(); i+=2)
    {
        if (this->_secondContainer[i - 1] > this->_secondContainer[i])
            std::swap(this->_secondContainer[i - 1], this->_secondContainer[i]);
        pairs.push_back(std::make_pair(this->_secondContainer[i - 1], this->_secondContainer[i]));
    }
    std::sort(pairs.begin(), pairs.end(), sortBySecond);
    for (size_t i = 0; i < pairs.size(); i++)
    {
        S.push_back(pairs[i].second);
        pend.push_back(pairs[i].first);
    }
    for (size_t i = 0; i < pend.size(); i++)
    {
        std::deque<int>::iterator it = std::upper_bound(S.begin(), S.end(), pend[i]);
        S.insert(it, pend[i]);
    }
    for (size_t i = 0; i < S.size(); i++)
        this->_secondContainer[i] = S[i];
}


void    PMerge::sortVector( void ) {
    std::vector<std::pair<int, int> > pairs;
    std::vector<int> S;
    std::vector<int> pend;
    if ((this->_firstContainer.size() % 2))
        pend.push_back(this->_firstContainer.back());
    for (size_t i = 1; i < this->_firstContainer.size(); i+=2)
    {
        if (this->_firstContainer[i - 1] > this->_firstContainer[i])
            std::swap(this->_firstContainer[i - 1], this->_firstContainer[i]);
        pairs.push_back(std::make_pair(this->_firstContainer[i - 1], this->_firstContainer[i]));
    }
    std::sort(pairs.begin(), pairs.end(), sortBySecond);
    for (size_t i = 0; i < pairs.size(); i++)
    {
        S.push_back(pairs[i].second);
        pend.push_back(pairs[i].first);
    }
    for (size_t i = 0; i < pend.size(); i++)
    {
        std::vector<int>::iterator it = std::upper_bound(S.begin(), S.end(), pend[i]);
        S.insert(it, pend[i]);
    }
    for (size_t i = 0; i < S.size(); i++)
        this->_firstContainer[i] = S[i];
}

