/*Create a program that displays on the screen a square of n x n stars,
with the integer n given as an input.
Input:
5
Output:
*****
*****
*****
*****
*****
*/

#include <stdio.h>
int main(void) {
    int n;
    int i,j;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
  
    
    return 0;
}