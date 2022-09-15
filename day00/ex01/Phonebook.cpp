
#include "Phonebook.hpp"

void PhoneBook::addContact(Contact contact, int index)
{
	contacts[index % MAX_SIZE].setFirstName(contact.getFirstName());
	contacts[index % MAX_SIZE].setLastName(contact.getLastName());
	contacts[index % MAX_SIZE].setNickName(contact.getNickName());
	contacts[index % MAX_SIZE].setPhoneNumber(contact.getPhoneNumber());
	contacts[index % MAX_SIZE].setDarkestSecret(contact.getDarkestSecret());
}

void    PhoneBook::editing_data(std::string &printed_data, std::string attribute)
{
    if (printed_data.length() > 10)
    {
        printed_data.erase(9);
        printed_data += '.';
    }
    std::cout << attribute << std::setw(10) << printed_data << "|";
}

void    PhoneBook::edit_and_print_data(Contact contact, int contact_index)
{
    std::string printed_data;
    std::cout << "index : " << std::setw(10) << contact_index << "|";
    printed_data = contact.getFirstName();
    editing_data(printed_data, " First Name : ");
    printed_data = contact.getLastName();
    editing_data(printed_data, " Last Name : ");
    printed_data = contact.getNickName();
    editing_data(printed_data, " Nick Name : ");
    std::cout << std::endl;
}

void    PhoneBook::printingByIndex(Contact contact)
{
    std::cout << "First Name : " << contact.getFirstName() << std::endl;
    std::cout << "Last Name : " << contact.getLastName() << std::endl;
    std::cout << "NickName : " << contact.getNickName() << std::endl;
    std::cout << "Phone Number : " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret : " << contact.getDarkestSecret() << std::endl;
}

void    PhoneBook::checkAndSearch(PhoneBook phonebook, int contactIndex)
{
    Contact contact;
    std::string enteredIndex;

    if (contactIndex == 0)
    {
        std::cout << "Empty Phonebook, try adding a new contact" << std::endl;
        return ;
    }
    for (int i = 0; i < contactIndex && i < MAX_SIZE; i++)
        edit_and_print_data(phonebook.contacts[i], i);
    std::cout << "Enter the index : ";
    getline(std::cin, enteredIndex);
    contact = phonebook.Search(phonebook, contactIndex, enteredIndex);
    printingByIndex(contact);
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
        validIndex = atoi(enteredIndex.c_str());
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