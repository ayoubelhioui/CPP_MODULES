
#include "Phonebook.hpp"

void PhoneBook::addContact(Contact contact, int index)
{
	contacts[index % 8].setFirstName(contact.getFirstName());
	contacts[index % 8].setLastName(contact.getLastName());
	contacts[index % 8].setNickName(contact.getNickName());
	contacts[index % 8].setPhoneNumber(contact.getPhoneNumber());
	contacts[index % 8].setPhoneNumber(contact.getPhoneNumber());
}