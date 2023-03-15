# ifndef _BITCOIN_EXCHANGE_HPP_
# define _BITCOIN_EXCHANGE_HPP_

# include <iostream>
# include <fstream>

# define INVALID_ARGUMENTS "Number Of arguments are invalid"
class BitcoinExchange{
private :

public :
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &oldObj);
	BitcoinExchange &operator =(const BitcoinExchange &oldObj);
	~BitcoinExchange();
};

#endif