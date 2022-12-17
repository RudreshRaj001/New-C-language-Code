#include <stdio.h>

int main()
{

    // write a program to find the grade of a student given his marks based on below :
    // 90 - 100 --> A
    // 80 - 90 --> B
    // 70 - 80 --> C
    // 60 - 70 --> D
    // < 60 --> F
    int Marks;
    printf("Enter your Marks (0-100)\n");
    scanf("%d", &Marks);
    
    switch (Marks)
    {
    case 60:
        printf("YOUR GRADE IS D\n");
        break;
    case 70:
        printf("YOUR GRADE IS C\n");
        break;
    case 80:
        printf("YOUR GRADE IS B\n");
        break;
    case 90:
        printf("YOUR GRADE IS A\n");
        break;
    case 100:
        printf("INVALID MARKS\n");
        break;
    default:
        printf("YOUR GRADE IS F \n");
        break;
        return 0;
    }
}