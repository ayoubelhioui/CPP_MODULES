#ifndef  PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"


#define MAX_SIZE 8
class PhoneBook{
    private:
        Contact contacts[MAX_SIZE];
	public:
        void    addContact(const Contact &contact, int &index);
        Contact getContactByIndex(const int &contactIndex, std::string &enteredIndex);
        int     isValidIndex(std::string &enteredIndex, const int &contactIndex);
        bool    lookingForCharacters(const std::string &enteredIndex);
        void    editAndPrintData(const Contact &contact, int &contact_index);
        void    editingData(std::string &printed_data);
        void    checkAndSearch(int &contactIndex);
        void    printingByIndex(Contact const &contact);
};
#endif