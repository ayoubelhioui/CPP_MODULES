#ifndef  PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"
#define MAX_SIZE 8
class PhoneBook{
    private:
        Contact contacts[MAX_SIZE];
	public:
        void    addContact(Contact contact, int index);
        Contact Search(PhoneBook phonebook, int contactIndex, std::string enteredIndex);
        int     isValidIndex(std::string enteredIndex, int contactIndex);
        bool    lookingForCharacters(std::string enteredIndex);
        void    edit_and_print_data(Contact contact, int contact_index);
        void    editing_data(std::string &printed_data, std::string attribute);
        void    checkAndSearch(PhoneBook phonebook, int contactIndex);
        void    printingByIndex(Contact contact);
};
#endif