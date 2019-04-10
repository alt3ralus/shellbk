#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
int main(void)
{
	char * line;
	char *token;
       size_t len = 0;
       ssize_t read;
       const char a[3] = "\t \n";
       char *argv[] = {"", NULL};
       pid_t sub_shell;
       int status;

       while (read != -1)
       {
	       write(1, "$ ", 2);
	       read = getline(&line, &len, stdin);
	       if (read != 1 && read != -1)
	       {
		       token = strtok(line, a);
		       sub_shell = fork ();
		       if (sub_shell == -1)
		       {
			       perror("./shell");
			       return (1);
		       }
		       if (sub_shell != 0)
		       {
			       wait(&status);
		       }
		       else
		       {
			       if (execve(token, argv, NULL) == -1)
				       perror("/shell");
			       /* kill(getpid(), 1); */
			       free(line);
			       exit(1);
		       }
	       }
       }
       write(1, "\n", 1);
       free(line);
       exit(EXIT_SUCCESS);
}
