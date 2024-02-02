#include <stdio.h>

int main()
{
    float curbal,credscore,interestrate;
    printf("Enter your current balance: ");
    scanf("%f",&curbal);
    printf("Enter your credit score: ");
    scanf("%f",&credscore);

    if (credscore<600)
    {
       printf("Interest=%f",curbal*0.15);
    }

    else if (credscore<=750&&credscore>=600)
    {
      printf("Interest=%f",curbal*0.12);
    }
    else if (credscore>750)
    {
      printf("Interest=%f",curbal*0.10);
    }
    else 
    {
      printf("Invalid Cred score or Current balance");
    }
    return 0;
}