#ifndef PMERGE_HPP_
#define PMERGE_HPP_

# include <iostream>
# include <deque>
# include <vector>

# define INVALID_ARGUMENTS "Number Of arguments is invalid"
class PMerge{
private :
    std::vector<int> _firstContainer;
    std::deque<int> _secondContainer;
    void    _mergeSort( std::vector<int> &data );
    void    _insertionSort( std::vector<int> &data );
public :
	PMerge();
	PMerge( const PMerge &oldObj );
    PMerge &operator =( const PMerge &oldObj );
    ~PMerge();
    void    printContainer( void );
    void 	fillContainers( int ac, char **av );
	void 	sortWithVector( void );
};
#endif