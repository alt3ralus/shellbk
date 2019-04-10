#include "shell.h"

/**
 * _strcut - A function that cuts every word from a sentence.
 * @line: str.
 * @separator: char.
 * Return: Double pointer to.
 */

char **_strcut(char * line, const char *separator)
{
	int count = 0;
	char *duplicate;
	char *token;
	char **retorno;

	duplicate = strdup(line);

	token = strtok(line, separator);
	count++;

	printf("duplicate = %s \n ", duplicate);

	while (token != NULL)
	{
		token = strtok(NULL, separator);
		count++;
	}

	retorno = malloc(sizeof (char *) * count);

	count = 0;

	retorno[count] = strtok(duplicate, separator);

	printf("Retorno 1 = %s \n", retorno[count]);

	while ( retorno[count] != NULL)
	{
		count++;
		retorno[count] = strtok(NULL, separator);
		printf("Retorno 2 es %s \n", retorno[count]);
	}

	return(retorno);
}

int main(void)
{
	char cadena[] = "ls -lat";
	char **cadenaP;
	int i = 0;

	cadenaP = _strcut(cadena, " ");

	while(i <= 2)
	{
		printf("cadenas main [%d]: %s\n", i, cadenaP[i]);
		i++;
	}

	return (0);
}
