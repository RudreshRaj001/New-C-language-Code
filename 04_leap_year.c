// #include <stdio.h>

// int main ()
// {
//      /*If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
// If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
// If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
// The year is a leap year (it has 366 days).
// The year is not a leap year (it has 365 days).*/

// int year;
// printf("enter the year: \n");
// scanf("%d", &year);

// if (year%4==0){

// }

//      return 0;
// }

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year if perfectly visible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // not a leap year if visible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // all other years are not leap year
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}