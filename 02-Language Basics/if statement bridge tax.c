/*You arrive in front of a bridge that you must cross to reach a village before dark. 
Crossing the bridge is not free - the bridgekeeper asks you to roll two dice
to determine the cost. You decide to write a program to verify that 
he is charging the right price.
Your program should read two integers, between 1 and 6, representing 
the values of each die. If the sum is greater than or equal to 10,
then you must pay a special fee (36 coins). 
Otherwise, you pay twice the sum of the values of the two dice. 
Your program must then display the text "Special tax" or "Regular tax" 
followed by the amount you have to pay on the next line.*/

#include <stdio.h>
int main(void){
    
    int dice1,dice2;
    
    //Enter the values on the two rolled dice (1-6)
    scanf("%d%d",&dice1,&dice2);
    
    if((dice1+dice2)>=10)//Comparison operator (>=)
    {
        printf("Special Tax\n"); //if true
        printf("36");
    }
    else
    {
        printf("Regular Tax\n"); //if not
        printf("%d",2*(dice1+dice2));
    }

    
    return 0;
}