#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int a,b,c=0,m=2,n,limit;
	scanf("%d",&limit);
	while(c < limit)
	{
	for (n = 1;n < m; n++)
	{
	a = m * m - n * n;
	b = 2 * m * n;
	c = m * m + n * n;
	if (c > limit)
	break;
	printf("%d %d %d\n",a,b,c);
	}
	m++;
	}
	return 0;
}
