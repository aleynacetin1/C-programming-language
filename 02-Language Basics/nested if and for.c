#include <stdio.h>
int main(void) 
{
    int target;
    int i;
    printf("Please enter a target number: ");
    scanf("%d", &target);
    if (target >= 0) 
    {
        for (i=0; i<target; i++) 
        {
            if (i%2) 
            {
                printf("%d ", i);//Prints odd numbers between 0 and target number
            }
        }
    } 
    else 
    {
        printf("Nothing to do!\n");
    }
    return 0;
}