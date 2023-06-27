/*Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
main()
{
    int x;
    printf("enter day number to know message about that day\n ");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        printf("Monday \n Do you know what’s special about a Monday morning? It gives you a start point for your journey to success for the entire week. Make the best out of it\n");
        break;
        case 2:
            printf("Tuesday \nTuesdays are a chance for a new beginning and a new perspective, so make them count\n");
            break;
        case 3:
            printf("Wednesday \nWednesday is a day to help others and celebrate life\n");

        break;
        case 4:
            printf("Thursday \nI wish you a happy day with all the positive vibes\n");

        break;
        case 5:
            printf("Friday \nFridays are so awesome that every day in the week should be Fridays\n");
            break;
        case 6:
            printf("Saturday \nWishing you a Saturday filled with happiness, love, and endless possibilities\n");
            break;
        case 7:
            printf("Sunday \nStart your Sunday with a smile and a grateful heart\n");
        default:
            printf("Invalid day number");


    }
return 0;
}
