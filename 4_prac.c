#include <stdio.h>

int main()
{
    int principle, rate, years ;
    printf("principle \n");
    scanf("%d",&principle);
    printf("rate\n");
    scanf("%d",&rate);
    printf("years\n");
    scanf("%d",&years);
    int simpleintrest = (principle * rate * years) / 100;
    printf("The value of simple Intrest is %d", simpleintrest);
    return 0;
}