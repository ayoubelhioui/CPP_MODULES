
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
    for (unsigned int i = 0; i < _firstContainer.size(); i++)
        std::cout << "the first : " << this->_firstContainer[i] << " the second is : " << this->_secondContainer[i] << std::endl;
}

void    PMerge::sortWithVector( void ) {

}
