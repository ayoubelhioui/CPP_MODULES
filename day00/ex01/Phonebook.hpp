#ifndef  PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook{
	public:
		Contact contacts[8];
	void addContact(Contact contact, int index);
	
};
#endif