#include <stdio.h>

int main() 
{
  int a[20][20],i,j,r,c,sum=0;
  printf("enter rows:");
  scanf("%d",&r);
  printf("enter columns:");
  scanf("%d",&c);
  printf("enter A matrix:");
  for (i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      sum=sum+a[i][j];
    }
  }
  printf("%d is the sum of the element in A matrix",sum); 

  return 0;
}
