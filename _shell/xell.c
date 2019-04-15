#include "shell.h"
/**
 * main - This is the minishell!
 *
 *
 * Return: 0 on sucess
 */
int main(void)
{
	char *line = NULL;
	char **arg_spl = NULL;
	size_t len = 0;
	ssize_t read = 0;
	char *sep_arg = "\t \n";
	char *sep_var = "=:";
	char *var = "PATH";
	char *own_env = NULL;
	char **path_spl = NULL;
	char *arg_0 = NULL;
	char *path_0 = NULL;

	while (read != -1)
	{
		write(1, "$ ", 2);
		read = getline(&line, &len, stdin);
		if (read != 1 && read != -1)
		{
			arg_spl = _strcut(line, sep_arg, &arg_0);
			if (arg_spl[0] != NULL)
			{
				get_env(var, &own_env);
				if (exc_built(arg_spl) == 1)
				{
					path_spl = _strcut(own_env, sep_var, &path_0);
					execute(path_spl, arg_spl);
					free(own_env);
					free(arg_0);
					free(arg_spl);
					free(path_0);
					free(path_spl);
				}
			}
		}
	}
	free(line);
	write(1, "\n", 1);
	exit(EXIT_SUCCESS);
}
