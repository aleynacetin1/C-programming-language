//Get and print the address of a variable using pointers

#include <stdio.h>
int main(){
    
    int a = 8;
    double d = 98.47;
    char c = '#';
   
   //FOR SHOW USING POINTERS!!
    int *addressofA = &a;
    double *addressofD = &d;
    char *addressofC = &c;
   
    printf("USING POINTERS\n");
    printf("%p\n",addressofA);
    printf("%p\n",addressofD);
    printf("%p\n",addressofC);
    
    printf("\n");
    
    printf("WITHOUT POINTERS\n");
    printf("%p\n",&a);
    printf("%p\n",&d);
    printf("%p\n",&c);
    
    
    return 0;
}

/* output will be like this:

USING POINTERS
fffc
fff4
fff3

WITHOUT POINTERS
fffc
fff4
fff3
*/ 