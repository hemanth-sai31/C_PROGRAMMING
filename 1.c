#include<stdio.h>
#include<math.h>
void Pow(int x, int n);
void Add(int x, int n);
void Sub(int x, int n);
void mult(int x, int n);
void Div(int x, int n);
int main ()
{
int x,n,choice;
	printf("enter the x value : ");
	scanf("%d", &x);
	printf("enter the n value : ");
	scanf("%d", &n);
	printf("enter the choice : ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			Pow(x,n);
			break;
		case 2:
			Add(x,n);
			break;
		case 3:
			Sub(x,n);
			break;
		case 4:
			mult(x,n);
			break;
		case 5:
			Div(x,n);
			break;	
	}
	return 0;
}
void Pow(int x, int n)
{
	int result;
	result = pow(x,n);
	printf("pow(X,N) = %d", result);
}
void Add(int x, int n)
{
	int sum;
	sum = x+n;
	printf("Add(X,N) = %d", sum);
}
void Sub(int x, int n)
{
	int sub;
	sub = x-n;
	printf("Sub(X,N) = %d", sub);
}
void mult(int x, int n)
{
	int product;
	product = x*n;
	printf("Mult(X,N) = %d", product);
}
void Div(int x, int n)
{
	int division;
	division = x/n;
	printf("Div(X,N) = %d", division);
}
