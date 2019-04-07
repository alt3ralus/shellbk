/* #define _GNU_SOURCE */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(void)
{
       char *line = NULL;
       size_t len = 0;
       ssize_t read;
       int i;


       while (read != -1)
       {
	       write(1, "$ ", 2);
	       read = getline(&line, &len, stdin);
	       printf("%s", line);
       }
       free(line);
       exit(EXIT_SUCCESS);
}
