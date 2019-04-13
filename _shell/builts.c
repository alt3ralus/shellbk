#include "holberton.h"
#include "shell.h"
/**
 *
 *
 *
 *
 *
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
		if(_strcmp(args[0], builts[count].name) == 0)
		{
			(builts[count].fun)();
		}
	}


	return(0);
}


int xexit(void)
{
	exit(EXIT_SUCCESS);
	return(0);


}
