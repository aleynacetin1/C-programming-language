/* The population of a city has risen sharply over the past few years,
thanks to a high birth rate. However, 
this poses a number of problems, including a housing shortage. 
The mayor has decided to deal with the problem and would like to estimate the future growth of
the population, and he has called you in to help!

Please write a C-program that first reads an integer representing the current population of the city, 
and that next reads a decimal number for the projected population growth as a percentage (either positive or negative). 
The program should then display the expected population of the city in a year as a whole number. 
By convention we will only consider "whole" people. So a population of 31.8 inhabitants will be considered as having 31 inhabitants.
For example;
the current population = 198
the percentage = (%)7
The future population as a double type = 211.86
The output as a integer = 211
*/

#include <stdio.h>
int main(void){

    double percentage,future_population;
    int current_population;

    
   printf("Enter the current population of the city and the projected population growth as a percentage:  ");
   scanf("%lf%lf",&current_population,&percentage);//TWO INPUTS ARE GIVEN AT ONCE
    
    //THE FORMULA OF FUTURE POPULATION
    future_population = current_population + (current_population*percentage)/100;
    
    printf("%d",(int)future_population);//CONVERTS DOUBLE TYPE TO INTEGER TYPE
    
    return 0;
    
}