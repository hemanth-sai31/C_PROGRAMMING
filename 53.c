#include<stdio.h>
int main()
{
	int p,q,r,i;
	printf("enter the values of p :");
	scanf("%d",&p);
	printf("enter the values of q : ");
	scanf("%d",&q);
	printf("enter the values of r : ");
	scanf("%d",&r);
	printf("the numbers between %d and %d except %d:\n",p,q,r);
	for(i=p;i<=q;i++)
	{
		if (i % 10 == r || i / 10 == r)
		continue;
		printf("%d\t",i);
	}
	return 0;
}
