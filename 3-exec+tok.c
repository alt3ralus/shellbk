#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(void)
{
       char *line = NULL;
       char *token;
       size_t len = 0;
       ssize_t read;
       char *argv[] = {"", NULL};
       pid_t sub_shell;
       int status;

       while (read != -1)
       {
	       write(1, "$ ", 2);
	       read = getline(&line, &len, stdin);
	       token = strtok(line, "\n");
	       if (read != 1)
	       {
		       sub_shell = fork ();
		       if (sub_shell == -1)
		       {
			       perror("Error:");
			       return (1);
		       }
		       if (sub_shell != 0)
		       {
			       wait(&status);
		       }
		       else
		       {
			       if (execve(line, argv, NULL) == -1)
				       perror("Error");
		       }
	       }
       }
       free(line);
       exit(EXIT_SUCCESS);
}
