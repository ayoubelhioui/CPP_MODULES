# ifndef _BITCOIN_EXCHANGE_HPP_
# define _BITCOIN_EXCHANGE_HPP_

# include <iostream>
# include <fstream>
# include <map>

# define ERROR_IN_DATA_FILE "Error Inside Data File"
# define COMMA ','
# define COLUMN '|'
# define COULDNT_OPEN_FILE "Couldn't Open File"
# define DATA_FILE_PATH "./data.csv"
# define INVALID_ARGUMENTS "Number Of arguments is invalid"
class BitcoinExchange{
    private :
        BitcoinExchange();
        std::ifstream _inputFile;
        std::ifstream _dataCSV;
        std::map<std::string, std::string> _dataCSVInfo;
        std::multimap<std::string, std::string> _inputFileInfo;
        void _parseCSVFile( void );
        void _startExchanging( void );
    public :
        void prepareForExchanging( void );
        BitcoinExchange(const char *inputFile);
        BitcoinExchange(const BitcoinExchange &oldObj);
        BitcoinExchange &operator =(const BitcoinExchange &oldObj);
        ~BitcoinExchange( void );
        void fillingMapFromFile();
};

#endif