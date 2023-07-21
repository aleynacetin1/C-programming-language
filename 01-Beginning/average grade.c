//This code calculates the average grade of students. 
#include <stdio.h>
int main(void){
    
    int i,number_student,grade;
    int sum=0;
    
    printf("Enter the number of students: ");//Numbers of students you will enter from keyboard
    scanf("%d",&number_student);

    
    for(i=0; i<number_student; i++) //via for loop you enter the grades and the code sums those grades
    {
        printf("Enter the grades of students: ");
        scanf("%d",&grade);
        sum = sum + grade;
    }

    printf("%.2lf",(double) sum/number_student);//calculates average grade and convert double type (integer to double)
    return 0;
}