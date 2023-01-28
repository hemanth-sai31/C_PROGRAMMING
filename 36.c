#include<stdio.h>
#include<conio.h>
int main ()
{
int n,reverse = 0,remainder ;
printf("Number : ");
scanf("%d", &n);
while (n!=0)
{
	remainder =n%10;
	reverse = reverse * 10 + remainder;
	n=n/10;
}
printf("Reverse Number = % d", reverse);
return 0;
}
