#include <iostream>
#include "Phonebook.class.hpp"

Phonebook::Phonebook( void ){
	
	return;
}

void	Phonebook::setFirstName(){
	std::string s;
	std::cout << "What's the first name ?" << std::endl;
	std::cin >> s;
	firstName = s;
}

void	Phonebook::setLastName(){
	std::string s;
	std::cout << "What's the last name ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	lastName = s;
}

void	Phonebook::setNickname(){
	std::string	s;
	std::cout << "What's his nickname ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	nickname = s;
}

void	Phonebook::setPostalAddress(){
	std::string	s;
	std::cout << "What's his postal address ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	postalAddress = s;
}

void	Phonebook::setEmailAddress(){
	std::string	s;
	std::cout << "What's his email address ?" << std::endl;
	std::cin >> s;
	emailAddress = s;
}

void	Phonebook::setPhoneNumber(){
	int		ans;
	std::string	s;
	std::cout << "What's his phone number ?" << std::endl;
	while (1){
		
		std::cin >> s;
		try{
			ans = std::stoi(s);
			break;
		}
		catch (std::invalid_argument const &e){
			std::cout << "The girl from last night also gave me a false number :'( pliz gimme a correct one" << std::endl;
		}
	}
	phoneNumber = ans;
}

void	Phonebook::setBirthdayDate(){
	std::string	s;
	std::cout << "What's his birthday date ? [DD/MM/YYYY]" << std::endl;
	std::cin >> s;
	birthdayDate = s;
}

void	Phonebook::setFavoriteMeal(){
	std::string	s;
	std::cout << "What's his favorite meal ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	favoriteMeal = s;
}

void	Phonebook::setUnderwearColor(){
	std::string	s;
	std::cout << "What's his underwear's color ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	underwearColor = s;
}

void	Phonebook::setDarkestSecret(){
	std::string	s;
	std::cout << "What's his darkest secret (write it quietly) ?" << std::endl;
	std::getline(std::cin >> std::ws, s);
	if (!s.empty())
		std::cout << "Oh maan that's kinda sick :o you should see someone\n" << std::endl;
	darkestSecret = s;
}

void		Phonebook::print(int index) const{

	std::cout << index << ".         |";
	crop_print(firstName);
	crop_print(lastName);
	crop_print(nickname);
	std::cout << std::endl;

}

void		Phonebook::print_contact(){
	
	std::cout << "First name :\t\t" << firstName << std::endl;
	std::cout << "Last name :\t\t" << lastName << std::endl;
	std::cout << "Nickname :\t\t" << nickname << std::endl;
	std::cout << "Postal address :\t" << postalAddress << std::endl;
	std::cout << "Email ddress :\t\t" << emailAddress << std::endl;
	std::cout << "Phone number :\t\t" << phoneNumber << std::endl;
	std::cout << "Birthday date :\t\t" << birthdayDate << std::endl;
	std::cout << "Favorite meal :\t\t" << favoriteMeal << std::endl;
	std::cout << "Underwear color :\t" << underwearColor << std::endl;
	std::cout << "Darkest secret :\t" << darkestSecret << std::endl;
}

Phonebook::~Phonebook( void ){

	return;
}
