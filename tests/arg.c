#include <stdio.h>


int main(int ac, char **av)
{
	int count;

	for (count = 1; av[count] != NULL; count++)
	{
		printf("%s ", av[count]);
	}
	putchar('\n');
	return (0);

}
