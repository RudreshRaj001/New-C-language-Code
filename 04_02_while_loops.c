#include <stdio.h> 

int main ()
{
     int a ;
     printf("Enter the value of a");
     scanf("%d", &a);
     
    //while(a>10){ ----> this will lead to infinite loop 
    while(a<10){
        printf("%d\n", a);
        a++;
     }
     // after running the while loop
     // it runs again till the condition inside the while loop is true
     return 0;
}