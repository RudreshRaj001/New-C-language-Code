#include <stdio.h>

int main(){
    int x , y , temp;
    printf("Enter the initial value of X:");
    scanf("%d", &x);
    
    printf("Enter the initial value of Y:");
    scanf("%d", &y);
    // for swaping values 
    temp = x;
    x = y;
    y = temp;

    printf("VALUES AFTER SWAPING X AND Y:");
    printf("\n");
    printf("FINAL VALUE OF X = %d \nFINAL VALUE OF Y = %d", x, y);
    
    return 0;
}

// #include <stdio.h>  
// void swap(int *, int *);    
// int main()  
// {  
//     int a;  
//     int b;   
//     printf("Enter the value of a:");
//     scanf("%d", &a);
//     printf("Enter the value of b:");
//     scanf("%d", &b);
//     printf("Before swapping the values in main a = %d, b = %d\n",a,b);   
//     swap(&a,&b);  
//     printf("After swapping values in main a = %d, b = %d\n",a,b);   
// }  
// void swap (int *a, int *b)  
// {  
//     int temp;   
//     temp = *a;  
//     *a=*b;  
//     *b=temp;  
//     printf("After swapping values in function a = %d, b = %d\n",*a,*b);   
// }  