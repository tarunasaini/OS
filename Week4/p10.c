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
		sleep(6);//The parent will go into sleep and till then other process will execute
		printf("Hello , I am parent i have waited for child for 6 seconds\n");
	}
	else
	{
		
		printf("Hello I am child ! and Parent is waiting for me\n");
		exit(0);
	}
	return 0;
}

