#include <stdio.h>

int main()
 {
  char a;
  printf("enter:");
  scanf("%c",&a);
  if(((a>=65)&&(a<=90))||((a>=95)&&(a<122)))
  {
    printf("It is a character");
  }
  else if((a>=48)&&(a<=59))
  {
    printf("It is a number");
  }
  else{
    printf("It is other than number & character");
  }
  return 0;
}
