//Introduction to the STRUCTURES!

#include <stdio.h>

struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

int main(void) {
    
    struct student me = {"Aleyna", "Cetin", 2002, 3.5};
    
    printf("Names: %s %s\n", me.firstName, me.lastName);
    printf("Year of birth: %d\n", me.birthYear);
    printf("Average grade: %.2lf\n", me.aveGrade);
    return 0;
}
