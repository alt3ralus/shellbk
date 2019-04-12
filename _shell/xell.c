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

	while (read != -1)
	{
		write(1, "$ ", 2);
		read = getline(&line, &len, stdin);
		if (read != 1 && read != -1)
		{
			arg_spl = _strcut(line, sep_arg);
			get_env(var, &own_env);
			path_spl = _strcut(own_env, sep_var);
			execute(path_spl, arg_spl);
		}
	}
	write(1, "\n", 1);
	free(line);
	exit(EXIT_SUCCESS);
}
