# ifndef _BITCOIN_EXCHANGE_HPP_
# define _BITCOIN_EXCHANGE_HPP_

# include <iostream>
# include <fstream>
# include <map>
# include <sstream>
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
        std::map<std::string, double> _dataCSVInfo;
        void    _isDateValid( std::string date );
        void    _parseCSVFile( void );
        void    _startExchanging( void );
        void    _parseInputLines( std::string &enteredData );
    public :
        void    prepareForExchanging( void );
        BitcoinExchange( const char *inputFile );
        BitcoinExchange( const BitcoinExchange &oldObj );
        BitcoinExchange &operator =( const BitcoinExchange &oldObj );
        ~BitcoinExchange( void );
};

#endif