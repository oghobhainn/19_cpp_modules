#include <iostream>

static char	*ft_lowtocap(char *str)
{
	int i = 0;
	
	while (str[i])
	{	
		if (97 <= str[i] && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			std::cout << ft_lowtocap(argv[i]) << std::endl;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" << std::endl;
	return (0);
}
