
#include "Phonebook.hpp"

void PhoneBook::addContact(Contact contact, int index)
{
	contacts[index].setFirstName(contact.getFirstName());
	contacts[index].setLastName(contact.getLastName());
	contacts[index].setNickName(contact.getNickName());
	contacts[index].setPhoneNumber(contact.getPhoneNumber());
	contacts[index].setPhoneNumber(contact.getPhoneNumber());
}