#include <stdio.h>

int main()
{
    int radius ;
    printf("radius ");
    scanf("%d",&radius);
    int height ;
    printf("height ");
    scanf("%d",&height);
    float pi = 3.14;
    printf("The area of this circle is %f  \n", pi * radius * radius);
    printf("The volume of this cylinder is %f \n", pi * radius * radius * height);
    return 0;
}