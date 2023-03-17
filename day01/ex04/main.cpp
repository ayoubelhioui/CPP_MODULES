#include <iostream>
#include <fstream>
#include <string>
#define OUTPUTFILE "output.replace"

void    searchAndReplace(std::string &enteredString, char *firstString, char *secondString, int &firstStringLength, int &secondStringLength)
{
    int position = enteredString.find(firstString);
    while (position != -1)
    {
        enteredString.erase(position, firstStringLength);
        enteredString.insert(position, secondString);
        position = enteredString.find(firstString, position + secondStringLength);
    }
}

bool    errorHandling(int ac, char **av)
{
    if (ac < 4 || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0)
    {
        std::cout << "argument error" << std::endl;
        return (true);
    }
    return (false);
}

int main(int ac, char **av)
{
    if (errorHandling(ac, av))
        return 0;
    int secondStringLength;
    int firstStringLength;
    std::ifstream inputFile (av[1]);
    std::ofstream outputFile;
    std::string enteredString;
    outputFile.open(OUTPUTFILE);

    firstStringLength = strlen(av[2]);
    secondStringLength = strlen(av[3]);
    if (_inputFile.is_open())
    {
        while (getline(inputFile, enteredString))
        {
            searchAndReplace(enteredString, av[2], av[3], firstStringLength, secondStringLength);
            outputFile << enteredString << std::endl;
        }
    }
    else
        std::cout << "error opening file" << std::endl;
}