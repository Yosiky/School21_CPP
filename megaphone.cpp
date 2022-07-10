#include <iostream>
#include <string>

char	ee_to_upper(char c)
{
	return ('a' <= c && c <= 'z' ? c + 'A' - 'a' : c);
}

int	main(int argc, char **argv)
{
	const std::string	not_param("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

	if (argc == 1)
		std::cout << not_param;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; argv[i][j] != '\0'; ++j)
				std::cout << ee_to_upper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
