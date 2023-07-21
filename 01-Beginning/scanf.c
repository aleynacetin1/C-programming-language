/*This code takes two integer numbers from user via scanf with keyboard and sums them.
Then prints the sum as output to the screen.*/

 #include <stdio.h>
int main(void)
{
	int num1,num2,sum;
printf("Enter the two numbers:\n");
scanf("%d %d",&num1,&num2);//takes two number from user via keyboard!

sum=num1+num2;//adds the numbers received from the user!

printf("The summation of %d and %d is %d .\n" ,num1,num2,sum);// prints the sum of this numbers to the screen!
printf("%d + %d = %d\n\n",num1,num2,sum);

return 0;



}