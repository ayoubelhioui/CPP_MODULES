/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:59:41 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/09/28 15:59:59 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    checkForEmptyInput(std::string &enteredData, std::string attribute)
{
    while (enteredData.empty())
    {
        std::cout << "Please Enter the " << attribute << " : ";
        getline(std::cin, enteredData);
    }
}

void    phoneNumberChecking(std::string &enteredData, std::string attribute)
{
    checkForEmptyInput(enteredData, attribute);
    for (size_t i = 0; i < enteredData.length();i++)
    {
        if (!isdigit(enteredData.at(i)))
        {
            std::cout << "Please Enter the Phone Number : ";
            i = -1;
            getline(std::cin, enteredData);
            checkForEmptyInput(enteredData, attribute);
        }
    }
}

void	handlingWrongInput(std::string &enteredData, std::string attribute)
{
    getline(std::cin, enteredData);
    if (attribute == "phone number")
        phoneNumberChecking(enteredData, attribute);
    else
        checkForEmptyInput(enteredData, attribute);
}

Contact creatingTheObject()
{
    Contact contact;
	std::string enteredData;

	std::cout << "Enter The First Name :";
	handlingWrongInput(enteredData, "first name");
    contact.setFirstName(enteredData);
    std::cout << "Enter the last name :";
	handlingWrongInput(enteredData, "last name");
	contact.setLastName(enteredData);
	std::cout << "Enter the nickname :";
	handlingWrongInput(enteredData, "nickname");
	contact.setNickName(enteredData);
	std::cout << "Enter the phone number:";
	handlingWrongInput(enteredData, "phone number");
	contact.setPhoneNumber(enteredData);
	std::cout << "Enter the Darkest Secret :";
	handlingWrongInput(enteredData, "Darkest Secret");
	contact.setDarkestSecret(enteredData);
	return (contact);
}

int main()
{
    PhoneBook phoneBook;
    std::string enteredData;
    int contactIndex = 0;

    while (true)
    {
        std::cout << "Please Enter A Command, ADD, SEARCH or EXIT: ";
        std::getline(std::cin, enteredData);
        if (enteredData == ADD){
            phoneBook.addContact(creatingTheObject(), contactIndex);
            contactIndex++;
        }
        else if (enteredData == SEARCH){
            phoneBook.checkAndSearch(contactIndex);
        }
        else if (enteredData == EXIT){
            break ;
        }
    }

}
