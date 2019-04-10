#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *_strdup(char *str);
int main(void)
{
	char command[30] = "    ls   -lac    dfsd\n";
	int i = 0;
	char *token;
	char **args;
	char *cp;

	cp = _strdup(command);
	token = strtok(command, " \n");
	i++;
	printf("x: %s\n", token);

	while (token != NULL)
	{
		token = strtok(NULL, " \n");
		printf("[]--%s\n", token);
		i++;
	}
	printf("i: %d\n", i);
	printf("command: %s\n", command);
	printf("cp: %s\n", cp);
}
char *_strdup(char *str)
{
	char *p;
	int i;
	int size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
