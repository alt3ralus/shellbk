#include "holberton.h"
#include "shell.h"

int main(void)
{
	char *line = NULL;
	char **arg_spl = NULL;
	size_t len = 0;
	ssize_t read = 0;
	char *sep_arg = "\t \n";
	char *sep_var = "=:";
	/* pid_t sub_shell; */
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
			/* sub_shell = fork(); */
			/* if (sub_shell == -1){ */
			/* 	perror("./shell"); */
			/* 	return (1); */
			/* } */
			/* if (sub_shell != 0) */
			/* 	wait(&status); */
			/* else */
			/* { */
			/* 	if (execve(token, argv, NULL) == -1) */
			/* 	perror("/shell"); */
			/* 	kill(getpid(), 1); */
			/* 	free(line); */
			/* 	exit(1); */
		        /* } */
		}
	}
	write(1, "\n", 1);
	free(line);
	exit(EXIT_SUCCESS);
}
