#include <stdio.h>

int main() 
{
  int a[20][20],i,j,r,c;
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
      if(a[i][j]>a[0][0])
      {
        a[0][0]=a[i][j];
      }
    }
  }
  printf("%d is the greatest in A matrix",a[0][0]); 

  return 0;
}
