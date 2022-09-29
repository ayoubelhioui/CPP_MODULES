#include <iostream>
#include <fstream>
#include <string>

void    searchAndReplace(std::string &enteredString, char *firstString, char *secondString){
    int position;
    position =  enteredString.find(firstString);
    while (position != -1)
    {
        enteredString.erase(position, strlen(firstString));
        enteredString.insert(position, secondString);
        position = enteredString.find(firstString, position + strlen(secondString));
    }
}

void    checkingForErrors(int ac, char **av)
{
    if (ac < 4 || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0)
    {
        std::cout << "argument error" << std::endl;
        exit(EXIT_SUCCESS);
    }
}

int main(int ac, char **av)
{
    checkingForErrors(ac, av);
    std::ifstream inputFile (av[1]);
    std::ofstream outputFile;
    outputFile.open("output.replace");
    std::string enteredString;
    if (inputFile.is_open()) {
        while (getline(inputFile, enteredString)){
            searchAndReplace(enteredString, av[2], av[3]);
            outputFile << enteredString << std::endl;
        }
    }
    else
        std::cout << "error opening file" << std::endl;
}