#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("/*Name: Taruna Saini\nSection : G\nRoll no : 66\nUniversity Roll no : 2017183*/\n");
	int n = 0;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements:");
	for (int i = 0 ; i < n ; i ++)
	{
		scanf("%d",&arr[i]);
	}
	int even = 0 ;
	int odd = 0;
	int check = fork();
	for (int i = 0 ; i < n ; i ++)
	{
		if (i% 2 == 0)
		{
			even = even + arr[i];
		}
		else
                       odd = odd + arr[i];}
	if (check == 0)
	printf("Odd no sum is %d",odd);
	else
	printf("Even no sum is %d",even);
	return 0;}

