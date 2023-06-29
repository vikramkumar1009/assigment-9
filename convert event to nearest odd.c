/*Program to Convert even number into its upper nearest odd number
Switch Statement.*/
#include<stdio.h>
main()
{
    int x;
    printf("enter number to Convert even number into its upper nearest odd number ");
    scanf("%d",&x);
    switch(x%2==0)
    {
    case 1:
                x=x+1;
       printf("converted number is %d",x);
       break;
    case 0: switch(x%2 !=0)
           {
            case 1:
                  printf("converted number is %d",x);
                  break;
              case 0: printf(" number is 0 not possible to convert");

    }break;


    }

       return 0;
}
