#include<stdio.h>
int main()
{
 int array[23];
 int i, sum=0,n;
 int *ptr;
 printf("Enter the size of array:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  	printf("Enter element:");
	scanf("%d",&array[i]);
 }
	ptr = array;
 	for(i=0;i<5;i++) 
 {
 	sum = sum + *ptr;
	ptr++;
 }
	printf("Sum : %d",sum);
}
