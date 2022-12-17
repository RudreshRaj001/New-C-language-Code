#include <stdio.h> 

int main ()
{
     // using ascii table
     // 97 - 122 = a - z
      
    char ch;
    printf ("Enter the character:");
    scanf ("%c", &ch);
    if (ch <= 122 && ch >=97){
        printf("%c is in lower case", ch);
    }
    else{
        printf ("%c is not in lower case", ch);
    }
    return 0;
}