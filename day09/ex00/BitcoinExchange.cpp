# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    std::ifstream data;
    data.open(DATA_FILE_PATH);
    if (data.fail())
        throw (std::runtime_error(COULDNT_OPEN_DATA_FILE));
    std::string enteredData;
    while (getline(data, enteredData))
    {
        size_t  commaPosition = enteredData.find(COMMA);
        if (commaPosition == std::string::npos)
            throw (std::runtime_error(ERROR_IN_DATA_FILE));
        std::string firstPart = enteredData.substr(0, commaPosition);
        std::string secondPart = enteredData.substr(commaPosition + 1);
        this->bitcoinInfo[firstPart] = secondPart;
    }
            std::map<std::string, std::string>::iterator m = this->bitcoinInfo.begin();
        while (m != this->bitcoinInfo.end())
        {
            std::cout << "|" << m->first << "|:|" << m->second << "|" << std::endl;
            m++;
        }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &oldObj) {
    *this = oldObj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &oldObj) {
    this->bitcoinInfo = oldObj.bitcoinInfo;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() { };

void BitcoinExchange::fillingMapFromFile() {

}
