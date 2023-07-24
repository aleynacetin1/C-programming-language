/*You will write a program that first read how many people will throw and how many dice each person will throw.
Then you will enter respectively value of dices for first person ( 4 5 3 ) after that output will be like this:
Person 1 sums of throws 12. Then you will enter same things for second person ( 3 6 2 )and output will be like this:
Person 2 sums of throws 11

INPUT 
2 3
INPUT    OUTPUT
4 5 3    Person 1 sums of throws 12
3 6 2    Person 2 sums of throws 11
*/

#include <stdio.h>
int main(void) {
    int nbPeople;
    int nbDice;
    int diceValue;
    int throwSum = 0;
    int person;
    int dice;
    //how many people will throw and how many dice each person will throw
    scanf("%d %d", &nbPeople, &nbDice);
    for(person = 0; person <nbPeople; person ++){
        for(dice = 0; dice<nbDice; dice++){
            scanf("%d", &diceValue);
            throwSum = throwSum + diceValue;
        }
        printf("Person %d sums of throws %d\n",person+1,throwSum);
        throwSum = 0;
    }
  
   
    return 0;
}