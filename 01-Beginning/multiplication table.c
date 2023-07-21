/*This code takes any number as an input from user via scanf with keyboard and creates multiplication table from 0 to 10.
This code uses for loop. For example;
You entered the number 5 as an input with klavye. This code makes table like this:
OUTPUT
 0x5=0
 1x5=5
 2x5=10
 3x5=15
   .
   .
   .
10x5=50   

!!You can give any number that you want as an input.
If you want to make the output from (0-50)  to (0-100) you should write inside the for loop 21 instead of 11.*/

#include <stdio.h>
int main(void)
{
    int i,number;
    printf("Enter the number: "); //ENTER ANY NUMBER AS AN INPUT
    scanf("%d",&number);
    for(i=0; i<11; i++)//FOR LOOP repeats 11 times
    {
        printf("%dx%d = %d\n",i,number,i*number);
    }
    return 0;
}