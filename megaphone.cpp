#include <iostream>
#include <string>
#include <string.h>

std::string	&toUpper(std::string &line)
{
	for (int i = 0; i < line.size(); ++i)
		line[i] = std::toupper(line[i]);
	return (line);
}

int	main(void)
{
	std::string	line;

	std::cin >> line;
	std::cout << toUpper(line) << std::endl;
	return (0);
}
