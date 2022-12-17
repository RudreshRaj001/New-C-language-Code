#include <stdio.h> 

int main ()
{
     int a = 4;
     int b = 8;
     int z;
     z = b * a; //legal                   
     // b * a = z; //illegal      
     printf("the value of z is : %d\n", z);
     printf("the value of a + b is : %d\n", a + b);  
     printf("the value of a - b is : %d\n", a - b);
     printf("the value of a * b is : %d\n", a * b);
     printf("the value of a / b is : %d\n", b / a);
      

    printf("5 when divided by 2 leaves a remainder of %d\n ", 5%2);
    
    printf("-5 when divided by 2 leaves a remainder of %d\n ", -5%2);
    
    printf("5 when divided by -2 leaves a remainder of %d\n ", 5%-2);
    
    printf("the value of 4*5 is %d\n ", 4*5 );
    printf("the value of 4^5 is %d\n ", 4^5 );
     return 0;
}