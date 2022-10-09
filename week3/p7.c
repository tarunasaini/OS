#include <stdio.h>
#include <unistd.h>
int main()
{
            printf("/*Name : Taruna Saini \nSection : G\nRoll no : 66\n Univ. Roll no : 2017183*/\n");
	int id1 = fork();
	int id2 = fork();
	if (id1 > 0 && id2 > 0)
	{
		printf("Hello! I am Parent(Level1)\n");
		 printf ("\n\nParent : Parent’s PID: %d\n", getpid());
    		printf ("Parent : Child’s PID1: %d\n", id1);
    		printf ("Parent : Child’s PID2: %d\n", id2);
		
	}
	else if (id1 == 0 && id2 > 0)
	{
		printf("\nHello! I am child1(Level2)\n");
		printf("\n\nPId1 of child1 on level 2 is %d\n",getpid());
		printf("child1 : Parent's PID is %d\n",getppid());
		
	}
	else if (id1 > 0 && id2 == 0)
	{
		printf("\n\nHello! I am child2(Level2)\n");
		printf("\n\nPId2 of child2 on level 2 is %d\n",getpid());
		printf("child2 : Parent's PID is %d\n",getppid());
	}
	else
	{
		printf("\n\nHello! I am child3(Level3)\n");
		printf("\n\nPId of child3 on level 3 is %d\n",getpid());
		printf("child3 : Parent's PID is %d\n",getppid());
		
	}
	return 0;
}




