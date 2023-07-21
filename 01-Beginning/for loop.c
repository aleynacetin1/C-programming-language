/*Here is how: You should write a program that takes several lines of input from a user (see the below example).
 The first line of the input indicates the number of robots to be deployed. 
 Each subsequent line shows the height,the weight,the power of the engines 
 and a resistance rating (1,2, or 3) of each of of these robots.
 Your program should use this information to calculate the total power of these robots.
 The power of all robots is the sum of the power of each robot, where the power of an individual robot is calculated via:
  (enginePower + resistance) * (weight - height)
For example;
INPUT : 2
        50 60 2 1
        43 62 5 2

OUTPUT : 163
And here is total power calculation: (2 + 1)*(60-50)+(5 + 2)*(62-43) */
//You must use "for loop" to read each of the lines!
//You must write general code using scanf for take an input from user!
/*Purpose of this sample is using int variables taking a input from user via scanf and using for loop!*/

#include <stdio.h>
int main(void) {
    int numbersRobots;
    int height, weight, enginePower, resistance;
    int totalpower = 0;
    printf("Numbers of robots:");/*if you dont confuse,you cant write this part*/
    scanf("%d",&numbersRobots);
     for(int i=0; i<numbersRobots; i++) {
         printf("the height, the weight, the power of engines, a resistance rating");/*if you dont confuse,you cant write this part*/
         scanf("%d%d%d%d",&height,&weight,&enginePower,&resistance);
         totalpower = totalpower + ((enginePower + resistance)*(weight - height));
     }
    printf("%d",totalpower);
    return 0;
} 