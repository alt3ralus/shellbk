#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	pid_t child;
	char *path = "/bin/ls";
	char *args[] = {"-l", "../../", NULL};

	while (i < 5)
	{
		child = fork();
		if(child == 0)
		{
			execve(path, args, NULL);
			exit(-1);
		}
		else
			wait(NULL);
		i++;
	}
	return (0);
}
