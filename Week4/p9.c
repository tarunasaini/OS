#include<stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
           printf("/*Name : Taruna Saini \nSection : G\nRoll no : 66\n Univ. Roll no : 2017183*/\n");
	// Create a child process	
	int pid = fork();

	if (pid > 0)
	{
		
		printf("In parent process");
	}
	// Note that pid is 0 in child process
	// and negative if fork() fails
	else if (pid == 0)
	{
		sleep(4);
		printf("in child process");
	}
	return 0;}

