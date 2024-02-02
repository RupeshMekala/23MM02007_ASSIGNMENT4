#include <stdio.h>
int main()
{
    int  n;
    printf("Enter number:");
    scanf("%f",&n);
    switch(n%2==0)
    {
       case 0:
      printf("Number is odd");
       break;

       case 1:
       printf("Number is even");
       break;

       default:
       printf("Number is invalid");
       break;

      
    }


  return 0;
}