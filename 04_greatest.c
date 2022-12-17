#include <stdio.h> 

int main ()
{
     int a , b , c , d;
     printf("Enter the value of a:");
     scanf("%d", &a);
     printf("Enter the value of b:");
     scanf("%d", &b);
     printf("Enter the value of c:");
     scanf("%d", &c);
     printf("Enter the value of d:");
     scanf("%d", &d);

     if (a>b && a>c && a>d){
       printf("%d is the greatest of all", a);
     }
     if (b>a && b>c && b>d){
       printf("%d is the greatest of all", b);
     }
     if (c>b && c>a && c>d){
       printf("%d is the greatest of all", c);
     }
     if (d>b && d>c && d>a){
       printf("%d is the greatest of all", d);
     }
     
     return 0;

// another way 
/*
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter four numbers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greatest \n", a);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d is greatest \n", b);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is greatest \n", c);
            }
            else
            {
                printf("%d is greatest \n", d);
            }
        }
    }

    return 0;
}
*/
}