# include "BitcoinExchange.hpp"

void BitcoinExchange::_parseCSVFile( void ){
    std::string enteredData;
    while (getline(this->_dataCSV, enteredData))
    {
        if (enteredData == "date,exchange_rate")
            continue ;
        size_t  separatorPosition = enteredData.find(COMMA);
        if (separatorPosition == std::string::npos)
            throw (std::runtime_error(ERROR_IN_DATA_FILE));
        std::string firstPart = enteredData.substr(0, separatorPosition);
        double secondPart = stod(enteredData.substr(separatorPosition + 1));
        this->_dataCSVInfo[firstPart] = secondPart;
    }
}

bool    isValid(char &a)
{
    return (isnumber(a) or a == '-' or a == ' ' or a == '|');
}

void    BitcoinExchange::_isDateValid(std::string date) {
    int value;
    std::stringstream str(date);
    str >> value;
    if (value < 2009 or value > 2022)
    {
        std::cout << value << std::endl;
        throw (std::runtime_error("Error: Enter a year between 2009 and 2022."));
    }
    str >> value;
    if (value < 1 or value > 12)
    {
        std::cout << value << std::endl;
        throw (std::runtime_error("Error: Enter a month between 01 and 12"));
    }
    str >> value;
    if (value < 1 or value > 31)
    {
        std::cout << value << std::endl;
        throw (std::runtime_error("Error: Enter a day between 01 and 31"));
    }
}

int     countMinus(std::string &enteredData)
{
    int count = 0;
    for (unsigned int i = 0; i < enteredData.length(); i++)
    {
        if (enteredData[i] == ' ')
            return (count);
        if (enteredData[i] == '-')
            count++;
    }
    return (count);
}

void    BitcoinExchange::_parseInputLines(std::string &enteredData) {
    if (std::find_if(begin(enteredData), end(enteredData), isValid) == end(enteredData))
        throw (std::runtime_error("Error: date must contain numbers only."));
    int minusCount = countMinus(enteredData);
    if (minusCount != 2)
        throw (std::runtime_error("Error: invalid input : " + enteredData));
    long value;
    std::string save;
    std::string  stt;
    std::string column;
    std::string st;
    std::stringstream str(enteredData);
    str >> stt;
    if (stt.empty())
        throw (std::runtime_error("Error: bad input => " + enteredData));
    save = stt;
    for (unsigned int i = 0; i < stt.length(); i++)
        if (stt[i] == '-')
            stt[i] = ' ';
    str >> column;
    if (column.empty() || column != "|")
        throw (std::runtime_error("Error: bad input => " + enteredData));
    this->_isDateValid(stt);
    str >> st;
     if (st.empty())
        throw (std::runtime_error("Error: bad input => " + enteredData));
    value = std::stod(st);
    if (value > 1000)
        throw (std::runtime_error("Error: too large number."));
    if (value < 0)
        throw (std::runtime_error("Error: not a positive number."));
    std::map<std::string, double>::iterator it = this->_dataCSVInfo.find(save);
    if (it != this->_dataCSVInfo.end())
        std::cout << save << " => " << value << " = " << value * it->second << std::endl;
    else
    {
        it = this->_dataCSVInfo.lower_bound(save);
        it--;
        std::cout << save << " => " << value << " = " << value * it->second << std::endl;
    }

}
BitcoinExchange::BitcoinExchange( void ) {}

void    BitcoinExchange::_startExchanging( void ) {
    std::string enteredData;
    while (getline(this->_inputFile, enteredData))
    {
        try
        {
            this->_parseInputLines(enteredData);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
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
        throw (std::runtime_error(COULDNT_OPEN_FILE));}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &oldObj) {
    *this = oldObj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &oldObj) {
    this->_dataCSVInfo = oldObj._dataCSVInfo;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() { };

