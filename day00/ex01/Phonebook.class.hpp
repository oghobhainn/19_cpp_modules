#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>

class	Phonebook{

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	postalAddress;
	std::string	emailAddress;
	int		 phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

public:

	//Default constructor
	Phonebook( void );

	//Member function declarations (implementations in .cpp file)
	void		setFirstName();
	void		setLastName();
	void		setNickname();
	void		setPostalAddress();
	void		setEmailAddress();
	void		setPhoneNumber();
	void		setBirthdayDate();
	void		setFavoriteMeal();
	void		setUnderwearColor();
	void		setDarkestSecret();

	void		print(int index) const;
	void		print_contact();
	//Default destructor (add virtual if a class is to be derived
	//from, otherway the derived class' destructor won't be called
	//if the object is destroyed through a base-class reference
	~Phonebook( void );
};

void	crop_print(std::string name);

#endif
