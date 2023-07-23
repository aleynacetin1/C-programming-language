#include <stdio.h>
int main(void) {
    double array[5];
    double readValue = 0.0;
    int cellNumber = 0;
    int i = 0;
    for(i=0;i<5;i++){
        printf("Enter a decimal value:");
        scanf("%lf",&readValue);
        array[cellNumber] = readValue;
        printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
        cellNumber = cellNumber + 1;
    } 
    
   
    return 0;
}