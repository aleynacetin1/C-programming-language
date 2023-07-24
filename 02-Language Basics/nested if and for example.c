/*You want to determine the number of cities in a given region that have a population strictly greater than 10,000. 
To do this, you write a program that first reads the number of cities in a region as an integer,
and then the populations for each city one by one (also integers).
Example;
Input
6
1000
5000
15000
4780
0
23590

Output
2
*/

#include <stdio.h>
int main(void) 
{
    int cities,bigcity;
    int i,popu;
    bigcity=0;
    //enter the number of cities
    scanf("%d", &cities);
    for (i=0; i<cities; i++) {
        scanf("%d",&popu);
        if(popu>10000){
            bigcity=bigcity+1;
        }
    }
    printf("%d",bigcity);//prints number of bigcity that mean population > 10000
   
    return 0;
}
