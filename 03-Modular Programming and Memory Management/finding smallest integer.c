/*The goal of this problem is to find the smallest integer in a list of numbers using new type function.Please use min()!!


Example
Input
10
4 3 6 2 6 8 9 8 5 4
Output
2
*/

#include <stdio.h>

int min(int);//PROTOTYPE OF FUNCTION
int main(void){
    
    int number;
    scanf("%d",&number);
    min(number);
    
  return 0;
}

int min(int num){
    int list[20];
    int i;
    int smallest=0;
    
    for(i=0;i<num;i++){
        scanf("%d",&list[i]);
        if(list[0]>list[i]){
            smallest=list[i];
        }
    }

    printf("%d",smallest);
    
  return smallest;
}