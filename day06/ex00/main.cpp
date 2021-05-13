#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>

bool		is_char(std::string s)
{
	if (s.length() == 3 && s[0] == '\'' && s[2] == '\'')
		return true;
	return false;
}

bool		is_int(std::string s)
{
	unsigned int i = 0;
	if (s.length() > 0)
	{
		if ((s[i] == '+' || s[i] == '-') && s.length() > 1)
			i++;
		while (i < s.length())
		{
			if (!isdigit(s[i]))
				return false;
			i++;
		}
		return true;
	}
	return false;
}

bool		is_double(std::string s)
{
	unsigned int i = 0;
	if (s == "nan" || s == "+inf" || s == "-inf")
		return true;
	if ((s[i] == '+' || s[i] == '-') && s.length() >= 4) // sign, number, dot, number
		i++;
	int j = i;
	while (i < s.length())
	{
		if (s[i] == '.')
		{
			if (j - i == 0)
				return false;
			break ;
		}
		if (!isdigit(s[i]))
			return false;
		i++;
	}
	j = i;
	if (i < s.length() - 1)
		i++;
	while (i < s.length())
	{
		if (!isdigit(s[i]))
			return false;
		i++;
	}
	if (j - i == 0)
		return false;
	return true;
}

bool		is_float(std::string s)
{
	if (is_double(s.substr(0, s.length() - 1)) && s[s.length() - 1 == 'f'])
		return true;
	return false;
}

void		ft_cast(double d)
{
	std::cout << "char: ";
	if (d >= 33 && d <= 126)
	{
		char c = static_cast<char>(d);
		std::cout << "\'" << c << "\'" <<std::endl;
	}
	else if ((d >= 0 && d < 33) || d == 127)
	{
		std::cout << "Non displayable" << std::endl;
	}
	else
	{
		std::cout << "impossible" << std::endl;
	}
	
	std::cout << "int: ";
	if (INT_MIN <= d && d <= INT_MAX && !std::isnan(d) && !std::isinf(d))
	{
		std::cout << static_cast<int>(d) << std::endl;
	}
	else
	{
		std::cout << " impossible" << std::endl;
	}

	std::cout << "float: ";
	{
		std::cout << static_cast<float>(d);
		if (round(d) == d)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	std::cout << "double: ";
	{
		std::cout << d;
		if (round(d) == d)
			std::cout << ".0";
		std::cout << std::endl;	
	}
	
}

void		ft_convert(std::string s)
{
	double	d;
	if (is_char(s))
	{
		d = static_cast<double>(s[1]);
	}
	else if (is_int(s))
	{
		std::stringstream ss(s);
		ss >> d;
	}
	else if (is_double(s))
	{
		if (s == "nan")
			d = NAN;
		else if (s == "+inf")
			d = INFINITY;
		else if (s == "-inf")
			d = -INFINITY;
		else
		{
			std::stringstream ss(s);
			ss >> d;
		}
	}
	else if (is_float(s))
	{
		if (s == "nanf")
			d = NAN;
		else if (s == "+inff")
			d = INFINITY;
		else if (s == "-inff")
			d = -INFINITY;
		else
		{
			std::stringstream ss(s.substr(0, s.length() - 1));
			ss >> d;
		}
	}
	else
	{
		std::cout << "NOT A CORRECT TYPE" << std::endl;
		return ;
	}
	ft_cast(d);
}

int			main(int argc, char **argv)
{
	if ( argc == 2 )
	{
		std::cout << argv[1] << std::endl;
		ft_convert(argv[1]);
		std::cout << "==========" << std::endl;
	}
	else if ( argc == 1 ) // generic
	{
		std::cout << "=== 0 ===" << std::endl;
		ft_convert("0");
		std::cout << "=== nan ===" << std::endl;
		ft_convert("nan");
		std::cout << "=== 42.0f ===" << std::endl;
		ft_convert("42.0f");
		std::cout << "=== nanf ===" << std::endl;
		ft_convert("nanf");
		std::cout << "=== 'a' ===" << std::endl;
		ft_convert("'a'");
		std::cout << "=== -1234 ===" << std::endl;
		ft_convert("-1234");
		std::cout << "=== 85 ===" << std::endl;
		ft_convert("85");
		std::cout << "=== nanf ===" << std::endl;
		ft_convert("nanf");
		std::cout << "=== 420.042f ===" << std::endl;
		ft_convert("420.042f");
		std::cout << "=== 0.12 ===" << std::endl;
		ft_convert("0.12");
		std::cout << "=== 0. ===" << std::endl;
		ft_convert("0.");
		std::cout << "=== +.5 ===" << std::endl;
		ft_convert("+.5");
		std::cout << "=== +.5f ===" << std::endl;
		ft_convert("+.5f");
		std::cout << "=== +0.f ===" << std::endl;
		ft_convert("+0.f");
		std::cout << "=== 54f ===" << std::endl;
		ft_convert("54f");
		std::cout << "=== +inf ===" << std::endl;
		ft_convert("+inf");
		std::cout << "=== -inff ===" << std::endl;
		ft_convert("-inff");
	}
	else
	{
		std::cerr << "wrong number of arguments" << std::endl;
		return (1);
	}
	
	return (0);
}