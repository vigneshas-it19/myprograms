#include <stdio.h>

int main() 
{
  int a[20][20],b[20][20],d[20][20],s[20][20],i,j,r,c;
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
  printf("enter B matrix:");
  for (i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for (i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      s[i][j]=a[i][j]+b[i][j];
    }
  }
  for (i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      d[i][j]=a[i][j]-b[i][j];
    }
  }
  printf("The sum of the two matrix is:\n");
  for (i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d\t",s[i][j]);
    }
    printf("\n");
  }
  printf("The difference of the two matrix is:\n");
  for (i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d\t",d[i][j]);
    }
    printf("\n");
  }

  return 0;
}
