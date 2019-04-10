#include <stdio.h>
#include <unistd.h>
/**
 * main - PPID and PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t myPid, myPpid;

	myPid = getpid();
	printf("pid: %u\n", myPid);
	myPpid = getppid();
	printf("ppid: %u\n", myPpid);

	return(0);
}
