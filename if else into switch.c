/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
6.*/
#include<stdio.h>
main()
{
    int x;


       printf("enter your choice\n");
    scanf("%d",&x);
        switch(x)
    {
        case 1:
        printf("Good\n");

        break;
        case 2:
            printf("Better\n");

            break;
        case 3:
            printf("Best\n");

        break;
        default:
            printf("Invalid choice\n");
            printf("\n");

}

return 0;
}
