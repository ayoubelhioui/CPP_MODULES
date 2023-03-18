#ifndef PMERGE_HPP_
#define PMERGE_HPP_

# include <iostream>
# include <set>
# include <vector>

# define INVALID_ARGUMENTS "Number Of arguments is invalid"
class PMerge{
private :
	std::set<int> firstContainer;
	std::vector<int> secondContainer;
public :
	PMerge();
	PMerge(const PMerge &oldObj);
	PMerge &operator =(const PMerge &oldObj);
	~PMerge();
};
#endif