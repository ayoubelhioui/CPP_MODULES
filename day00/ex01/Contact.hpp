#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>


class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void setFirstName(std::string data);
		std::string getFirstName();
		void setLastName(std::string data);
		std::string getLastName();
		void setNickName(std::string data);
		std::string getNickName();
		void setPhoneNumber(std::string data);
		std::string getPhoneNumber();
		void setDarkestSecret(std::string data);
		std::string getDarkestSecret();
};

#endif