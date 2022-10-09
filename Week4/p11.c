#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#include <unistd.h>
int main()
{
	    printf("/*Name : Taruna Saini \nSection : G\nRoll no : 66\n Univ. Roll no : 2017183*/\n");
	// Fork returns process id
	// in parent process
	pid_t child_pid = fork();

	// Parent process
	if (child_pid > 0)
		sleep(2);

	// Child process
	else
	{
		printf("Hello I am child and i have exited and parent is still sleeping\n");		
		exit(0);
	}
	return 0;
}

