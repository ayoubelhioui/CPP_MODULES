/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:59:05 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/09/28 15:59:13 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

void PhoneBook::addContact(const Contact &contact, int &index)
{
	contacts[index % MAX_SIZE].setFirstName(contact.getFirstName());
	contacts[index % MAX_SIZE].setLastName(contact.getLastName());
	contacts[index % MAX_SIZE].setNickName(contact.getNickName());
	contacts[index % MAX_SIZE].setPhoneNumber(contact.getPhoneNumber());
	contacts[index % MAX_SIZE].setDarkestSecret(contact.getDarkestSecret());
}

void    PhoneBook::editingData(std::string &printed_data)
{
    if (printed_data.length() > 10)
    {
        printed_data.erase(9);
        printed_data += '.';
    }
    std::cout << std::setw(10) << printed_data << "|";
}

void    PhoneBook::editAndPrintData(const Contact &contact, int &contact_index)
{
    std::string printedData;


    std::cout << std::setw(10) << contact_index << "|";
    printedData = contact.getFirstName();
    editingData(printedData);
    printedData = contact.getLastName();
    editingData(printedData);
    printedData = contact.getNickName();
    editingData(printedData);
    std::cout << std::endl;
}

void    PhoneBook::printingByIndex(const Contact &contact)
{
    std::cout << "First Name : " << contact.getFirstName() << std::endl;
    std::cout << "Last Name : " << contact.getLastName() << std::endl;
    std::cout << "NickName : " << contact.getNickName() << std::endl;
    std::cout << "Phone Number : " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret : " << contact.getDarkestSecret() << std::endl;
}

void    PhoneBook::checkAndSearch(int &contactIndex)
{
    Contact contact;
    std::string enteredIndex;

    if (contactIndex == 0)
    {
        std::cout << "Empty Phonebook, try adding a new contact" << std::endl;
        return ;
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < contactIndex && i < MAX_SIZE; i++)
        editAndPrintData(this->contacts[i], i);
    std::cout << "Enter the index : ";
    getline(std::cin, enteredIndex);
    contact = this->getContactByIndex(contactIndex, enteredIndex);
    printingByIndex(contact);
}


bool PhoneBook::lookingForCharacters(const std::string &enteredIndex)
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

int PhoneBook::isValidIndex(std::string &enteredIndex, const int &contactIndex)
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

Contact PhoneBook::getContactByIndex(const int &contactIndex, std::string &enteredIndex)
{
    int     validIndex;

    validIndex = isValidIndex(enteredIndex, contactIndex);
    return (this->contacts[validIndex]);
}
