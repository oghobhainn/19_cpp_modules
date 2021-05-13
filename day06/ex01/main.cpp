#include <string>
#include <iostream>
#include <ctime>
#include <sstream>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void * serialize( void )
{
	std::string s1 = "abcd1234";
	std::string s2 = "efgh5678";
	std::string *s3 = new std::string;

	int random_value = rand() % 1000;

	std::stringstream ss;

	ss << s1;
	ss << random_value;
	ss << s2;

	ss >> *s3;
	return reinterpret_cast<void*>(s3);
}


Data * deserialize( void * raw )
{
	std::string *s3 = reinterpret_cast<std::string*>(raw);
	Data *data = new Data;
	data->s1 = s3->substr(0,8);
	data->s2 = s3->substr(s3->length() - 8, s3->length());

	std::stringstream ss(s3->substr(9, s3->length() - 8));
	ss >> data->n;
	return data;
}

int main()
{

	srand(time(NULL));
	void * seri = serialize();
	if (!seri)
		std::cout << "bouffon" << std::endl;
	Data *data = new Data;
	data = deserialize(seri);
	std::cout << "data s1: " << data->s1 << std::endl;
	std::cout << "data int: " << data->n << std::endl;
	std::cout << "data s2: " << data->s2 << std::endl;
	delete data;
	
	return (0);
}