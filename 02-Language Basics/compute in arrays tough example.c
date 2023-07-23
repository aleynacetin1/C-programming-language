/*You plan to make a delicious meal and want to take the money you need to buy the ingredients.
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. 
The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). 
Your program should calculate the total cost of these purchases, then display it with 6 decimal places.

There are 4 ingredients and they all have a different price per pound: 9.90, 5.50, 12.0, and 15.0. 
You must take 0.25 lbs of the first, 1.5 lbs of the second, 0.3 lbs of the third and 1 lb of the fourth. 
It will cost exactly $29.325000.

Input:
4
9.90 5.50 12.0 15.0
0.250 1.5 0.300 1.0

Output:
29.325000
*/

#include <stdio.h>  //array1[]=price per pound of ingredients; array2[]=must taken pound ; x=how many ingredients we buy
int main(void) {
   double array1[10],array2[10],cost;
   int i, x;
   cost=0;
   scanf("%d",&x);
   
   for(i=0;i<x;i++){
       scanf("%lf",&array1[i]);
   }
   
   for(i=0;i<x;i++){
       scanf("%lf",&array2[i]);
   } 
   
   for(i=0;i<x;i++){
       cost=cost+(array1[i]*array2[i]);
   }
   
   printf("%.6lf",cost);
    return 0;
}