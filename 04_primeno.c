#include <stdio.h> 
// Prime number is a natural number greater than 1 that is not a product of two smaller natural numbers.
// Disclaimer: this is not the best method to solve this problem.

int main ()
{
     int n, prime = 1;
     printf("enter the value of n:");
     scanf("%d", &n);
     for(int i=2; i<n; i++)
     {
        if(n%i==0){
            prime = 0;
            break; 
        }
     }
     if (prime == 0){
        printf("This is not a prime number\n");
     }
     else{
        printf("This is a prime number");
     }
     return 0;
}