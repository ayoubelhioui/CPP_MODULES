# ifndef _RPN_HPP_
# define _RPN_HPP_

# include <iostream>
# include <stack>
# include <sstream>

# define PLUS "+"
# define MINUS "-"
# define DIVIDE "/"
# define MULTIPLY "*"
# define INVALID_ARGUMENTS "Number Of arguments is invalid"

class RPN{
public :
		std::stack<int> dataHolder;
		RPN( void );
		RPN(const RPN &oldObj);
		RPN &operator =(const RPN &oldObj);
		void	performOperation( std::string &_operator);
		~RPN();
};
#endif