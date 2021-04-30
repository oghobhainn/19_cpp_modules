#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Not enough arguments, need 3 (filename s1 s2)."<< std::endl;
		return (1);
	}
	else
	{
		std::string		filename(argv[1]);
		std::string		toSearch(argv[2]);
		std::string		toReplace(argv[3]);
		std::string		line; 

		std::ifstream	ifs(filename);
		if (!ifs){
			std::cerr << "Error: file couldn't be opened: " << filename << std::endl;
			exit (1);
		}

		std::ofstream	ofs(filename + ".replace");
		if (!ofs){
			std::cerr << "Error: file couldn't be created: " << filename << ".replace" << std::endl;
			ifs.close();
			exit (1);
		}

		while (std::getline(ifs, line))
		{
			size_t start_pos = 0;
			while ((start_pos = line.find(toSearch, start_pos)) != std::string::npos){
				line.replace(start_pos, toSearch.length(), toReplace);
				start_pos += toReplace.length();
			}
			ofs << line << std::endl;
		}
	
		ifs.close();
		ofs.close();
	
	}
	return (0);
}