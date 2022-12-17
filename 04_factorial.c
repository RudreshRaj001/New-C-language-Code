#include <stdio.h> 

int main ()
{
     int i=1,n,factorial=1;
     printf("Enter the factorial no.\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        factorial*=i;
     }
     printf("The value of factorial of %d is %d\n",n,factorial);
     return 0;
}