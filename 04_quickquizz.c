#include <stdio.h> 

int main ()
{
     int n ;
     printf("Enter the no. of natural numbers");
     scanf("%d",&n);

     for (int a=1 ; a < n ; a++){
        printf("value of number is %d\n", a);
     }
     return 0;
}