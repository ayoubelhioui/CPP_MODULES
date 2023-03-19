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
    void    _mergeSort( int left, int right );
    void 	_merge( int left, int right, int middle );
    void    _insertionSort( int left, int right );
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