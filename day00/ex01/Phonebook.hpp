#ifndef  PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

#define MAX_SIZE 8
class PhoneBook{
	public:
		Contact contacts[MAX_SIZE];
	void    addContact(Contact contact, int index);
    Contact Search(PhoneBook phonebook, int contactIndex, std::string enteredIndex);
    int isValidIndex(std::string enteredIndex, int contactIndex);
    bool lookingForCharacters(std::string enteredIndex);
};
#endif