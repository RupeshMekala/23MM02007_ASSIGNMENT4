#include <stdio.h>
int main()
{
  int age;
  printf("Enter age : ");
  scanf("%d",&age);

  if (age<5)
  {
    printf("Free entry!");
  }
  else if(age>=5&&age<=12)
  {
    printf("Your fare is 20");
  }
  else if(age>=13&&age<=59)
  {
    printf("Your fare is 60");
  }
  else if(age>=60)
   { 
    printf("Your fare is 40");
   }
   return 0;
}