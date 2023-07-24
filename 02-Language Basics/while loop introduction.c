/*While loop introduction!
This code run like that:
We enters numbers as an inputs. 
As long as the number we entered is not 6, 
the code will run and the loop will continue.
When we enter the number 6, the loop will end 
and the output will appear on the screen.
We can also find how many times the loop repeats.
*/

#include <stdio.h>
int main(void) {
    int number=0;
    int total=0;
    
    //The loop will be continue the number we entered if not 6.
    while(number!=6){
        scanf("%d",&number);
        total=total+1;//counter shows us how many times loop repeats
    }
  
  printf("we take 6 at the %d. throw",total);
    
    return 0;
}