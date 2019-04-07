/* #define _GNU_SOURCE */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(void)
{
	char *line = malloc(10);
	size_t len = 10;
	ssize_t reaad;
	int i;


       while (1)
       {
	       write(1, "$ ", 2);
	       reaad = read(0, line, len);
	       write(1, line, len);
       }
       free(line);
       exit(EXIT_SUCCESS);
}
