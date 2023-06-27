/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
main()
{
    int x,a,b,c;

   while(1)
   {
       printf("enter your choice\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n2. Check whether a given set of three numbers are lengths of sides ofa right angled triangle or not\n3. Check whether a given set of three numbers are equilateral triangleor not\n4. Exit\n");
    scanf("%d",&x);
        switch(x)
    {
        case 1:
        printf(" 1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || a==c || b==c )
        printf("Found isosceles triangle");
    else
        printf("Not found isosceles triangle");
        break;
        case 2:
            printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
            scanf("%d%d%d",&a,&b,&c);
             if(a*a+c*c== b*b)
        printf("Found right triangle");
    else
        printf("Not found right triangle");
            break;
        case 3:
            printf("3.Check whether a given set of three numbers are equilateral triangleor not\n");
            scanf("%d%d%d",&a,&b,&c);
             if(a==b && b==c)
        printf("Found equilateral triangle");
    else
        printf("Not found equilateral triangle");

        break;
        case 4:
            printf("4.Exit\n");
        default:
            printf("Invalid choice");
            printf("\n");

}
    if(x==4)
        break;
        printf("\n");
   }
return 0;
}
