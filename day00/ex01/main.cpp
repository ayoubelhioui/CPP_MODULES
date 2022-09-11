#include "Phonebook.hpp"

void	handling_wrong_input(std::string &entered_data, std::string attribute)
{
    getline(std::cin, entered_data);
	while (entered_data.empty())
	{
        std::cout << "Please Enter the " << attribute << " : ";
        getline(std::cin, entered_data);
    }
}
Contact getting_input()
{
	Contact contact;
	std::string entered_data;
	std::cout << "Enter The First Name :";
	handling_wrong_input(entered_data, "first name");
    contact.setFirstName(entered_data);
    std::cout << "Enter the last name :";
	handling_wrong_input(entered_data, "last name");
	contact.setLastName(entered_data);
	std::cout << "Enter the nickname :";
	handling_wrong_input(entered_data, "nickname");
	contact.setNickName(entered_data);
	std::cout << "Enter the phone number:";
	handling_wrong_input(entered_data, "phone number");
	contact.setPhoneNumber(entered_data);
	std::cout << "Enter the Darkest Secret :";
	handling_wrong_input(entered_data, "Darkest Secret");
	contact.setDarkestSecret(entered_data);
	return (contact);
}

void    editing_data(std::string &printed_data)
{
    if (printed_data.length() > 10)
    {
        printed_data.erase(9);
        printed_data += '.';
    }
    std::cout << std::setw(10) << printed_data << "|";
}

void    edit_and_print_data(Contact contact, int contact_index)
{
    std::string printed_data;
    std::cout << std::setw(10) << contact_index << "|";
    printed_data = contact.getFirstName();
    editing_data(printed_data);
    printed_data = contact.getLastName();
    editing_data(printed_data);
    printed_data = contact.getNickName();
    editing_data(printed_data);
    std::cout << std::endl;
}

bool looking_for_character(std::string entered_index)
{
    size_t string_length;

    string_length = entered_index.length();
    for (size_t i = 0; i < string_length; i++)
    {
        if (isdigit(entered_index.at(i)))
            return (true);
    }
    return (false);
}

int isValidIndex(std::string entered_index, int contacts_index)
{
    int j;
    while (true)
    {
        j = atoi(entered_index.c_str());
        if (entered_index.empty() ||  looking_for_character(entered_index) || !(j > 0 && j < 8))
    }
    return (j);
}

void	Search(PhoneBook &phonebook, int index)
{
    Contact contact;
    std::string entered_index;

    if (index == 0)
    {
        std::cout << "Empty Phonebook, try adding a new contact" << std::endl;
        return ;
    }
    for (int i = 0; i < index && i < 8; i++)
        edit_and_print_data(phonebook.contacts[i], i);
    std::cout << "Enter the index : ";
    getline(std::cin, entered_index);
    contact = phonebook.contacts[isValidIndex(entered_index, index)];
    std::cout << contact.getFirstName() << std::endl;
    std::cout << contact.getLastName() << std::endl;
    std::cout << contact.getNickName() << std::endl;
    std::cout << contact.getPhoneNumber() << std::endl;
    std::cout << contact.getDarkestSecret() << std::endl;
}

int main()
{
    PhoneBook phonebook;
    int index = 0;
    std::string entered_data;
    while (true)
    {
        std::cout << "Please Enter A Command, ADD, SEARCH or EXIT: ";
        getline(std::cin, entered_data);
        if (entered_data == "ADD")
            phonebook.addContact(getting_input(), index++);
        else if (entered_data == "SEARCH")
            Search(phonebook, index);
        else if (entered_data == "EXIT")
            break ;
    }

}
