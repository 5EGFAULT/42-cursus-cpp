#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string str;

	for (int i = 1; i < argc; i++)
	{
		str = std::string(argv[i]);
		for (std::size_t j = 0; j < str.size(); j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
			std::cout << str[j];
		}
		std::cout<< " ";
	}
	std::cout << std::endl;
	//system("leaks ex00");
	return 0;
}