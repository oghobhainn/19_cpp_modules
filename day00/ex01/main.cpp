#include "Phonebook.class.hpp"
#include <iostream>
#include <string>

static void	print_phonebook(Phonebook contact[9], int nbpeople)
{
	int j = 0;
	while (j < nbpeople)
	{
		contact[j].print(j);
		j++;
	}
}


int main(){
	int		i = 0;
	int		j;
	std::string	ans;
	Phonebook	contact[9];
	
	while (1){
		std::cout << "Do you wanna ADD/SEARCH/EXIT an other contact? [a/s/e]" << std::endl;
		std::cin >> ans;

		if (ans.compare("e") == 0)
			break ;

		else if (ans.compare("a") == 0){
			if (i < 8){
				contact[i].setFirstName();
				contact[i].setLastName();
				contact[i].setNickname();
				contact[i].setPostalAddress();
				contact[i].setEmailAddress();
				contact[i].setPhoneNumber();
				contact[i].setBirthdayDate();
				contact[i].setFavoriteMeal();
				contact[i].setUnderwearColor();
				contact[i].setDarkestSecret();
				i++;
			}
			else
				std::cout << "This phonebook is full ! Can't add any more contacts" << std::endl;
		}

		else if (ans.compare("s") == 0)
		{
			while (1)
			{
				if (i > 0)
				{
					print_phonebook(contact, i);
					std::cout << "Which one are you looking for ? [0 - " << i - 1 << "]" << std::endl;
					std::cin >> ans;
					try
					{
						j = std::stoi(ans);
						if (j < 0 || j > i)
							std::cout << "If you look for someone who doesn't exist, you should try in a church..." << std::endl;
						else
						{
							std::cout << "Let's print that guy :" << std::endl;
							contact[j].print_contact();
							break;
						}
					}
					catch (std::invalid_argument const &e)
					{
						std::cout << "Invalid argument"  << std::endl;
					}
				}
				else
				{
					std::cout << "The phonebook is empty for the moment !" << std::endl;
					break;
				}
			}
		}

		else
			std::cout << "just answer the question, you donkey" << std::endl;

	}
	return (0);
}
