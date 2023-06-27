//write aProgram to check whether a year is a leap year or not. Using switch
//statement
#include<stdio.h>
main()
{
    int x;


       printf("enter year to cheack leap year or not\n");
    scanf("%d",&x);
    switch(x%400==0)
    {
        case 1:
            printf("%d is a leap year",x);
            break;
        case 0:
            switch(x%100==0)
            {
            case 1:
                printf("%d is not leap year",x);
                break;
            case 0:
            switch (x%4==0)
            {
            case 1:
                printf("%d is a leap year",x);
                break;
            case 0:
                printf("%d is not a leap year",x);


            }
            break;
            }
            break;
}

return 0;
}
