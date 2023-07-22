/*Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use! 
There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams). 
Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. 
It should then read an integer which represents an ingredient's 
ID number (between 0 and 9), and output the corresponding quantity.

Input:
500 180 650 25 666 42 421 1 370 211
3

Output:
25
*/

#include <stdio.h>
int main(void) {
    
    int ingredients[10],i,x;
   
    for(i=0;i<10;i++){
        //if you confused you can add printf part like this: printf("Enter the quantities: ");
        scanf("%d",&ingredients[i]);//Enter the quantities respectively
    }

    scanf("%d",&x);//Enter the ID number that want to see quantity of ingredient 
    printf("%d",ingredients[x]);

    /*if you want to print all quantities as an array you can do this:
    for(i=0;i<10;i++){
    printf("%d\n",ingredients[i]); prints them down
    printf("%d - ",ingredients[i]); prints them side by side
    }*/

    return 0;
}