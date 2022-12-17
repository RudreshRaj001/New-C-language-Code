#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    // onr liner if else condition
    // ? ---> if condition
    // : ---> else condition

    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");

    return 0;
}