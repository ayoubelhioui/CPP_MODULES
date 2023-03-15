# ifndef _BITCOIN_EXCHANGE_HPP_
# define _BITCOIN_EXCHANGE_HPP_

# include <iostream>
# include <fstream>
# include <map>

# define ERROR_IN_DATA_FILE "Error Inside Data File"
# define COMMA ','
# define COULDNT_OPEN_DATA_FILE "Couldn't Open data File"
# define DATA_FILE_PATH "./data.csv"
# define INVALID_ARGUMENTS "Number Of arguments are invalid"
class BitcoinExchange{
    private :
        std::map<std::string, std::string> bitcoinInfo;
    public :
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &oldObj);
        BitcoinExchange &operator =(const BitcoinExchange &oldObj);
        ~BitcoinExchange();
        void fillingMapFromFile();
};

#endif