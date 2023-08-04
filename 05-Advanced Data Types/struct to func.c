//Pass structures to functions directly
#include <stdio.h>

struct student{
	char firstName[30];
	char lastName[30];
	int birthYear;
	double aveGrade;
};

void printStudent(struct student stud);

int main(void) {
	
	struct student me={"Aleyna", "Cetin", 2002, 3.5};
	struct student you={"Alex", "Hamilton", 2005, 3.2};
	
	printStudent(me);
	printStudent(you);
	return 0;
}

void printStudent(struct student stud){
    printf("Name: %s %s\n", stud.firstName, stud.lastName);
	printf("Year of birth: %d\n",stud.birthYear);
	printf("Average grade: %.2lf\n",stud.aveGrade);
}