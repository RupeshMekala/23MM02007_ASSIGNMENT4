#include <stdio.h>



int main()
{
  int p,q;
  char a;
  
  


  
  printf("Enter a number:");
  scanf("%d%d",&p,&q);
  printf("Enter the operator : ");
  scanf(" %c",&a);
  

  switch(a){
  case '+':
         printf("sum is%d",p+q);
         break;
  case '-':
         printf("difference is %d",p-q);
         break;
  case '*':
         printf("product is %d",p*q);
         break;
  case '/':
         printf("quotient is %f",p/q);
         break;      

  default:
          printf("Invalid input");             
}
return 0;

}
