#include <string>
#include <iostream>
class Contact{
	public:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	// public:
	// 	void setFirstName(std::string std){
	// 		FirstName = std;
	// 	}
	// 	std::string getFirstName(){
	// 		return (FirstName);
	// 	}
};

class PhoneBook{
	public:
		Contact contacts[8];
};

int main()
{
	
}