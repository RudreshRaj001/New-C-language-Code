#include <stdio.h> 

int main ()
{
     int age ;
     printf("enter your age: ");
     scanf("%d", &age) ; 

     if (age < 18){
        printf("you cannot drive\n"); 
     }
     else {
        printf("you can drive\n");
     }

     if(age==50){   
        printf("half century\n");
     }
     return 0;
}