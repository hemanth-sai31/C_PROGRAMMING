#include<stdio.h>
int main()
{
	int a;
	printf("Enter the age :");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Eligible for vote:");
	}
	else if(a<18)
	{
		printf("Not eligble for vote");

			printf("\nRemainding age for vote:%d",18-a);
		}
	
	return 0;
}v
