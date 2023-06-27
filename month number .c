//Write a program which takes the month number as an input and display
//number of days in that month.
#include<stdio.h>
main()
{
    int x;
    printf("Enter Month Number To Know number of Days in That Month ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Jan 31 Days");
        break;
        case 2:
            printf("feb 28 in normal and 29 Days in leap year");
            break;
        case 3:
            printf("Mar 31 Days");
            break;
        case 4:
            printf("Apr 30 Days");
            break;
        case 5:
             printf("May 31 Days");
             break;
        case 6:
             printf("Jun 30 Days");
             break;
        case 7:
             printf("Jul 31 Days");
             break;
        case 8:
             printf("Aug 31 Days");
             break;
        case 9:
             printf("Sep 30 Days");
             break;
        case 10:
             printf("Oct 31 Days");
             break;
        case 11:
             printf("Nov 30 Days");
             break;
        case 12:
             printf("Dec 31 Days");
    }
    return 0;

}
