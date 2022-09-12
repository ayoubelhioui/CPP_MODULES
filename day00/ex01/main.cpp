#include "Phonebook.hpp"

void	handling_wrong_input(std::string &enteredData, std::string attribute)
{
    getline(std::cin, enteredData);
	while (enteredData.empty())
	{
        std::cout << "Please Enter the " << attribute << " : ";
        getline(std::cin, enteredData);
    }
}

Contact getting_input()
{
	Contact contact;
	std::string enteredData;
	std::cout << "Enter The First Name :";
	handling_wrong_input(enteredData, "first name");
    contact.setFirstName(enteredData);
    std::cout << "Enter the last name :";
	handling_wrong_input(enteredData, "last name");
	contact.setLastName(enteredData);
	std::cout << "Enter the nickname :";
	handling_wrong_input(enteredData, "nickname");
	contact.setNickName(enteredData);
	std::cout << "Enter the phone number:";
	handling_wrong_input(enteredData, "phone number");
	contact.setPhoneNumber(enteredData);
	std::cout << "Enter the Darkest Secret :";
	handling_wrong_input(enteredData, "Darkest Secret");
	contact.setDarkestSecret(enteredData);
	return (contact);
}

void    editing_data(std::string &printed_data, std::string attribute)
{
    if (printed_data.length() > 10)
    {
        printed_data.erase(9);
        printed_data += '.';
    }
    std::cout << attribute << std::setw(10) << printed_data << "|";
}

void    edit_and_print_data(Contact contact, int contact_index)
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

void    printingByIndex(Contact contact)
{
    std::cout << "First Name : " << contact.getFirstName() << std::endl;
    std::cout << "Last Name : " << contact.getLastName() << std::endl;
    std::cout << "NickName : " << contact.getNickName() << std::endl;
    std::cout << "Phone Number : " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret : " << contact.getDarkestSecret() << std::endl;
}

void    checkAndSearch(PhoneBook phonebook, int contactIndex)
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

int main()
{
    PhoneBook phoneBook;
    std::string enteredData;
    int index = 0;
    while (true)
    {
        std::cout << "Please Enter A Command, ADD, SEARCH or EXIT: ";
        getline(std::cin, enteredData);
        if (enteredData == "ADD")
            phoneBook.addContact(getting_input(), index++);
        else if (enteredData == "SEARCH")
            checkAndSearch(phoneBook, index);
        else if (enteredData == "EXIT")
            break ;
    }

}
