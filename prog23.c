#include <stdio.h>

int main()
 {
  char a[20];
  int i,j,k=0,h=0;
  printf("enter a letter:");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    k=k+1;
  }
  for(i=0;i<k;i++)
  {
    h=h+a[i];
  }
  printf("%d",h);
  return 0;
}
