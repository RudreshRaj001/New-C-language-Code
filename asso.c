#include <stdio.h> 

int main ()
{
     // Q3 . Write a program to determine whether a number is divisible by 97 or not.
     
          // int num;
          // printf ("enter the number : \n");
          // scanf ("%d", &num);
          // printf ("Divisibility test returns : %d\n", num%97); 

          // Q4 . Write a program to step by step evaluation of 3*x/y-z+k
          int x = 2 , y = 3 , z = 3 , k = 1;
          int result = 3 * x / y - z + k;

          // oprator precidence
          // 1st * / %
          // 2nd + -
          // 3rd =
          // 3 * x / y - z + k as * , / operators tie we use associativity 
          // 6/3 - 3 + 1
          // 2 - 3 + 1
          // -1 +1
          // 0
          printf (" the value of result = %d\n", result);

     return 0;
}