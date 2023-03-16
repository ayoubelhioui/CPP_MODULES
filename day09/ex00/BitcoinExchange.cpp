# include "BitcoinExchange.hpp"

void BitcoinExchange::_parseCSVFile( void ){
    std::string enteredData;
    while (getline(this->_dataCSV, enteredData))
    {
        size_t  separatorPosition = enteredData.find(COMMA);
        if (separatorPosition == std::string::npos)
            throw (std::runtime_error(ERROR_IN_DATA_FILE));
        std::string firstPart = enteredData.substr(0, separatorPosition);
        std::string secondPart = enteredData.substr(separatorPosition + 1);
        this->_dataCSVInfo[firstPart] = secondPart;
    }
}

BitcoinExchange::BitcoinExchange( void ) {}

void    BitcoinExchange::_startExchanging( void ) {
    std::string enteredData;
    while (getline(this->_inputFile, enteredData))
    {

    }
}

void    BitcoinExchange::prepareForExchanging( void ) {
    this->_parseCSVFile();
    this->_startExchanging();
}
BitcoinExchange::BitcoinExchange(const char *inputFile){
    this->_inputFile.open(inputFile);
    this->_dataCSV.open(DATA_FILE_PATH);
    if ((this->_inputFile.fail()) or this->_dataCSV.fail())
        throw (std::runtime_error(COULDNT_OPEN_FILE));
//    std::map<std::string, std::string>::iterator m = this->dataCSVInfo.begin();
//    while (m != this->dataCSVInfo.end())
//    {
//        std::cout << "|" << m->first << "|:|" << m->second << "|" << std::endl;
//        m++;
//    }
//    std::cout << "************************" << std::endl;
//    std::cout << this->inputFileInfo["2012-01-11 "] << std::endl;
//    std::map<std::string, std::string>::iterator m1 = this->inputFileInfo.begin();
//    while (m1 != this->inputFileInfo.end())
//    {
//        std::cout << "|" << m1->first << "|:|" << m1->second << "|" << std::endl;
//        m1++;
//    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &oldObj) {
    *this = oldObj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &oldObj) {
    this->_dataCSVInfo = oldObj._dataCSVInfo;
    this->_inputFileInfo = oldObj._inputFileInfo;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() { };

void BitcoinExchange::fillingMapFromFile() {

}
