#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int main()
{
            printf("/*Name : Taruna Saini \nSection : G\nRoll no : 66\n Univ. Roll no : 2017183*/\n");
	pid_t p = fork();
	if (p > 0)
	{
		
		printf("Hello , I am present");
	}
	else
	{
		sleep(2);//child is put on sleep
	}
	return 0;
}

