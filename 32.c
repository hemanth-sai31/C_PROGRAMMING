#include <stdio.h>



int main() 

{
    int i,n;
	int arr[n];

    
   
    printf("Enter the size of the array: ");
    scanf("%d", &n);

  
    printf("Enter an array: ");
    for(i=0;i<n;i++)
	{
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (i=n-1;i>=0;i--)
	{
        printf("%d ", arr[i]);
    }

    return 0;
}
