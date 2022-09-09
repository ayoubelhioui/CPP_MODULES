#include <iostream>
int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		exit (1);
	}
	for (int i = 1;av[i];i++)
	{
		for (int j = 0;av[i][j]; j++)
			std::cout << char(toupper(av[i][j]));
	}
}