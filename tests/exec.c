#include <stdio.h>
#include <unistd.h>

    /**
      * main - execve example
     *  *
     *  * Return: */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	if (execve(argv[0], argv, NULL) == -1)
		perror("Error:");
	return (0);
}
