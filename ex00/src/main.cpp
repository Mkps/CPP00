#include <iostream>
#include <string>

void StrToUpper(char *str)
{
	while (*str)
	{
		std::cout << (char)toupper(*str);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
		StrToUpper(av[i]);
	std::cout << std::endl;
	return (0);
}
