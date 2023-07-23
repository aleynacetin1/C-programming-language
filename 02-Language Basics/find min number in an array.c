//To find the maximum number and minimum number in an array
#include <stdio.h>
int main(void) {
    int age[10];
    int i;
    int ageMax = 0;
    int ageMin;
    ageMin=age[0];
    for (i=0; i<10; i++) {
        scanf("%d", &age[i]);
        //To find max age
        if (age[i] > ageMax) {
            ageMax = age[i];
        }
        //To find min age
        if(age[0]>age[i]){
            ageMin=age[i];
        }
    }
    
    printf("The maximum age is %d.\n", ageMax);//Prints max age
    printf("The minimum age is %d.\n", ageMin);//Prints min age
    printf("Age differences between max age and min age %d\n",ageMax-ageMin);
    
    return 0;
}