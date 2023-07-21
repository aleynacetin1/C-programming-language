/*This code prints the screen character pyramid. This code gives from user a character then creates pyramid like this:
INPUT
#
OUTPUT
++++#++++
+++###+++
++#####++
+#######+
#########
*/
#include <stdio.h>
int main(void){

int i,j;
char character;
printf("Enter the character: ");
scanf("%c",&character);

for(i=0; i<5; i++)
{
    for(j=0; j<4-i; j++)
    {
        printf("+");
    }
    for(j=0; j<2*i+1;j++)
    {
        printf("%c",character);
    }
    for(j=0; j<4-i; j++)
    {
        printf("+");
    }
    printf("\n");
}

return 0;
}