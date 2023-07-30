//Dereference a pointer: get the value stored at a specific address

#include <stdio.h>
int main(){
    
    double a = 42.98;
    double * addressOfA = &a;
    
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);

    * addressOfA = 32;
    * addressOfA = * addressOfA + 1; //WILL BE 33 !
    
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);
    return 0;
}

/* OUTPUT

At the address fff8 there is the value 42.98

At the address fff8 there is the value 33.00

*/