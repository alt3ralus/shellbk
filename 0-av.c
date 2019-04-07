#include <stdio.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main( int ac, char **av)
{
	int i = 0;
	(void) ac;

	while (*(av + i))
	{
		printf("%s\n", *(av + i));
		i++;
	}
	return (0);
}
