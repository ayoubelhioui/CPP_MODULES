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

int main()
{
    PhoneBook phoneBook;
    std::string enteredData;
    int index = 0;
    while (true)
    {
        std::cout << "Please Enter A Command, ADD, SEARCH or EXIT: ";
        getline(std::cin, enteredData);
        if (enteredData == ADD){
            phoneBook.addContact(getting_input(), index++);
        }
        else if (enteredData == SEARCH){
            phoneBook.checkAndSearch(phoneBook, index);
        }
        else if (enteredData == EXIT){
            break ;
        }
    }

}
