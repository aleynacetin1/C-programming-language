/*Examples
For a total population of 3 inhabitants, on day 1 a single person is infected. The next day, that person contaminates 2 new people so there are 3 infected people in total. This is the entire population, so it takes 2 days to contaminate the entire population.
Input:
3
Output:
2

For a total population of 10 inhabitants, on day 1 a single person is infected. This is followed by 2 new people on the second day for a total of 3 infected people. On the third day,  6 new people are infected for a total of 9 infected people. On the fourth day the last of the 10 people is infected (though the epedemic had the potential to infect 18 people on the fourth day) so your program should output '4'.
Input:
10
Output:
4

For a total population of 100 inhabitants, on day 1 a single person is infected. This is followed by 2 new people on the second day for a total of 3 infected people. On the third day,  6 new people are infected for a total of 9 infected people. On the fourth day, 18 new people are infected, for a total of 27 people. On the fifth day, 27 new people infect 54 people for a total of 81 people infected. On the sixth day, the last of the 100 people will be infected (though the 81 people have the potential to contaminate 162 people) so your program shuld output '6'.
Input:
100
Output:
6
*/
#include <stdio.h>
int main(void) {
    int population;
    scanf("%d", &population);
    
    int infectedPeople= 1;
    int day = 1;
    while (infectedPeople < population) {
         
         infectedPeople=infectedPeople+infectedPeople*2;
        day++;
    }
  
   printf("%d\n", day);

   
    return 0;
}
