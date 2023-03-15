# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { }

BitcoinExchange::BitcoinExchange(const BitcoinExchange &oldObj) {
    *this = oldObj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &oldObj) {
    (void) oldObj;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() { };
