/*Write a menu driven program with the following options:
a. Addition
b. Subtsraction
c. Multiplication
d. Division
e. Exit.*/
#include<stdio.h>
main()
{
    int a,b,x;

    while(1)
    {
         printf("select to perform operation\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit.\n ");
    scanf("%d",&x);
        switch(x)
    {
        case 1:
        printf("a. Addition\n.");
        printf("Enter two number to add\n");
        scanf("%d%d",&a,&b);
        printf("sum = %d\n",a+b);
        break;
        case 2:
            printf("b. Substraction.\n");
        printf("Enter two number to get difference \n");
        scanf("%d%d",&a,&b);
        printf("difference = %d\n",a-b);
        break;

        case 3:
            printf("c. Multiplication.\n");
        printf("Enter two number to get multiple \n");
        scanf("%d%d",&a,&b);
        printf("multiple = %d\n",a*b);
        break;
        case 4:
            printf("d. Division.\n");
        printf("Enter two number to get quotient\n");
        scanf("%d%d",&a,&b);
        printf("quotient = %d",a/b);
        break;
        case 5:
            exit(0);
        default:
            printf("invalid choice");
}
              if(x==5)
                break;
}
return 0;
}
