#include <stdio.h> 

int main ()
{
     int age ;
     int vipPass;
     printf(" do you have vipPass 1 = yes , 0 = no : ") ;
     scanf("%d", &vipPass) ;

     printf("enter your age: ");
     scanf("%d", &age) ; 

     if (age <= 70 && age >= 18 || vipPass == 1 ){
        printf("you can drive , you are above 18 and below 70 \n"); 
     }
     else {
        printf("you cannnot drive\n");
     }

     if(age==50){   
        printf("half century\n");
     }
     return 0;
}