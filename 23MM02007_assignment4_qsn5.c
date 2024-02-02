#include <stdio.h>
#include <math.h>
int main()
{
  int armn,dig,n;
  printf("Enter your number : ");
  scanf("%d",&armn);
  int count = 0;
  int num=armn;
  while (num != 0) 
  {
    num /= 10;
    count++;
  }

  if (armn>=100&&armn<=999)
   {
      int p1=armn/100;
      int p2=(armn%100)/10;
      int p3=(armn%100)%10;
     if  (pow(p1,3)+pow(p2,3)+pow(p3,3)==armn)
     {
       printf("It is an Armstrong number");
     }
     else{
      printf("It is not an Armstrong number");
     }

   }
    else{
      printf("It is not a 3 digit number");
     }
  
   
  return 0;

}