#include "shell.h"

/**
 * exc_built - description...
 *
 * @args:
 *
 * Return: 0 when fount a built in. 1 otherwise
 */
int exc_built(char **args)
{
	int count;

	built_s builts[] = {

		{"exit", xexit},
		{ "env", xenv},
		{NULL, NULL}

	};


	for (count = 0; builts[count].name != NULL; count++)
	{
		if (_strcmp(args[0], builts[count].name) == 0)
		{
			(builts[count].fun)();
			return (0);
		}
	}
	return (1);
}
/**
 * xexit - description...
 *
 *
 * Return: 0 always
 */
int xexit(void)
{
	exit(EXIT_SUCCESS);
	return (0);


}
