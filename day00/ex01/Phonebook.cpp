
#include "Phonebook.hpp"

void PhoneBook::addContact(Contact contact, int index)
{
	contacts[index % MAX_SIZE].setFirstName(contact.getFirstName());
	contacts[index % MAX_SIZE].setLastName(contact.getLastName());
	contacts[index % MAX_SIZE].setNickName(contact.getNickName());
	contacts[index % MAX_SIZE].setPhoneNumber(contact.getPhoneNumber());
	contacts[index % MAX_SIZE].setDarkestSecret(contact.getDarkestSecret());
}

bool PhoneBook::lookingForCharacters(std::string enteredIndex)
{
    size_t string_length;

    string_length = enteredIndex.length();
    for (size_t i = 0; i < string_length; i++)
    {
        if (!isdigit(enteredIndex.at(i)))
            return (true);
    }
    return (false);
}

int PhoneBook::isValidIndex(std::string enteredIndex, int contactIndex)
{
    int validIndex;
    while (true)
    {
        validIndex = stoi(enteredIndex);
        if (enteredIndex.empty() || lookingForCharacters(enteredIndex) || !(validIndex >= 0 && validIndex <= 7) || validIndex >= contactIndex)
        {
            std::cout << "Please Enter A Valid Index : ";
            getline(std::cin, enteredIndex);
        }
        else
            break ;
    }
    return (validIndex);
}

Contact PhoneBook::Search(PhoneBook phonebook, int contactIndex, std::string enteredIndex)
{
    int     validIndex;
    Contact contact;

    validIndex = isValidIndex(enteredIndex, contactIndex);
    contact = phonebook.contacts[validIndex];
    return (contact);
}