#include <stdio.h> 

int main ()
{
     int i = 5;
     printf ("The value after i++ is %d\n", i++);
     printf ("The value after i++ is %d\n", ++i);
     int a = 6;
     printf ("The value after a is %d\n", ++a);

    printf("%d\n", i);
    printf("%d\n", a);
    
    i+=10;
    printf("%d", i);

     return 0;
}