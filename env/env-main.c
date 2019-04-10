#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the environment


 *
 * Return: Always 0.
 */
int main(void)
{
	char *var = "HOME";
	char *own_envir;

	get_env(var, &own_envir);

	printf("main own_envir: %s\n", own_envir);
	return (0);
}
