#include <stdio.h>
int main(void) 
{
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
   
    int a = 5;
    int b = 2;
    int result;
    
    printf("Check: Is a == b?\n");
    
    result = a==b; // if a is equal to the b then result = 1 !! if not then result = 0 !!
    
    printf("Result is %d.\n", result);
    
    if (result)  // if result = 1, then prints screen TRUE!
    {
        printf("TRUE!\n");
    } 
    else  // if result = 0, then prints screen FALSE!
    {
        printf("FALSE!\n");
    }
    return 0;
}