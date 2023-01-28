#include <stdio.h>
int main() 
{

  int M,N,i;
  printf("M: ");
  scanf("%d", &M);
  {
    printf("N: ");
    scanf("%d", &N);
  } while (N<=0);

  for (i=1;i<=N;i++) 
  {
    printf("%d * %d = %d \n", M, i, M * i);
  }

  return 0;
}
