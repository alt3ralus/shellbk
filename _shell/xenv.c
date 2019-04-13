#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the environment


 *
 * Return: Always 0.
 */
int xenv(void)
{

	int count = 0;


	for(count = 0; environ[count] != NULL; count++)
	{
		printf("%s\n", environ[count]);
	}
	return (0);
}
