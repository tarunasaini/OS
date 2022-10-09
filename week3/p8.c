#include <stdio.h>
#include <unistd.h>
int main()
{
            printf("/*Name : Taruna Saini \nSection : G\nRoll no : 66\n Univ. Roll no : 2017183*/\n");
            int id1 = fork();
	int id2 = fork();
	int id3 = fork();
	if (id1 > 0 && id2 > 0 && id3 > 0)
	{
		printf("Hello! I am Parent(Level1)\n");
		 
		
	}
	else if (id1 == 0 && id2 > 0 && id3 > 0)
	{
		printf("Hello! I am child1(Level2)\n");
		
		
	}
	else if (id1 > 0 && id2 == 0 && id3 > 0)
	{
		printf("Hello! I am child2(Level2)\n");
		
	}
	else if (id1 > 0 && id2 > 0 && id3 == 0)
	{
		printf("Hello! I am child3(Level2)\n");
		
		
	}
	else if (id1 == 0 && id2 == 0 && id3 > 0)
	{
		printf("Hello! I am child4(Level3)\n");
	}
	else if (id1 == 0 && id2 > 0 && id3 == 0)
	{
		printf("Hello! I am child5(Level3)\n");
	}
	else if (id1 > 0 && id2 == 0 && id3 == 0)
	{
		printf("Hello! I am child6(Level3)\n");
	}
	
	else
	{
		printf("Hello! I am child7(Level4)\n");
	}
	return 0;
}
