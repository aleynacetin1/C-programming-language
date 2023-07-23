//To find the largest number in an array

#include <stdio.h>
int main(void) {
    
    int ages[10];
    int i;
    int ageMax = 0;
    
    for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);//Enter the ages
        
        //for finding the maximum age
        if (ages[i] > ageMax) {
            ageMax = ages[i];
        }
    }
    //Prints the output
    printf("The maximum age is %d.\n", ageMax);
    return 0;
}
