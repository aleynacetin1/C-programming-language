#include <stdio.h>
int main(void) {
    
    int i,x,array[20];//Declaration statement
    
    printf("Enter the number of elements in the array: ");
    scanf("%d",&x);
   
    for(i=0;i<x;i++){
        printf("Enter the elements of the array respectively: ");
        scanf("%d",&array[i]);//Stores the elements 
    }
     
     for(i=0;i<x;i++){
        printf("%d  ",array[i]);// prints them on the screen as an output
     }
    return 0;
}