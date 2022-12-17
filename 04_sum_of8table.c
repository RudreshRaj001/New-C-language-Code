#include <stdio.h>

int main()
{
    int i = 1;
    int n = 8;
    int sum = 0;

    while (i <= 10)
    {
        sum = sum + (i * n);
        i++;
    }
    printf("total sum of table of 8 is %d\n", sum);

    return 0;
}