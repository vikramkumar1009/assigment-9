/*Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/
#include<stdio.h>
main()
{
    int x;
    printf("enter number to convert positive into negative and negative into positive ");
    scanf("%d",&x);
    switch(x>0)
    {
    case 1:
       printf("converted number is -%d",x);
       break;
    case 0: switch(x<0)
           {
            case 1:
                  x= -1*x;
              printf("converted number is %d",x);
              break;
              case 0: printf(" number is 0 not possible to convert");

    }break;


    }

       return 0;
}
