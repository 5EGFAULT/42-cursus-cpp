#include <iostream>
#include <string>


std::string trim_string(std::string s)
{
	char	val[ s.find_last_not_of(" \t") - s.find_first_not_of(" \t") + 1];
	std::size_t len = s.copy(val, s.find_last_not_of(" \t") - s.find_first_not_of(" \t") + 1, s.find_first_not_of(" \t"));
	val[len] = '\0';
	return std::string(val);
}

int	main(int argc, char *argv[])
{
	std::string str;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		str = trim_string(std::string(argv[i]));
		
		for (std::size_t j = 0; j < str.size(); j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
			std::cout << str[j];
		}
		if (i != argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}