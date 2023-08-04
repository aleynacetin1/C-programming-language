/*You will implement a "tomorrow" 
feature in the C programming language via a function called "advanceDay()". 
The function advanceDay() should take as input a date (stored in a struct date) 
and return the date of the following day. You do not have to take into account 
leap years (although you may if you wish to). That is, it is okay 
for your function to always return March 1 as the day following February 28, 
no matter the year.
You are provided with a familiar date structure definition, a main function as well
as the function prototypes for the readDate(), printDate(), and advanceDay() 
functions. Do not modify any of the given code. Simply add your function 
definitions underneath the main() function.
Examples
Input:
2018 10 2
Output:
10/02/2018                                                                      
10/03/2018
 
Input:
2018 10 31
Output:
10/31/2018                                                                      
11/01/2018
 
Input:
2018 11 30
Output:
11/30/2018                                                                      
12/01/2018                                                                      
 
Input:
2018 12 31
Output:
12/31/2018                                                                      
01/01/2019
*/
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void readDate(struct date *);
void printDate(struct date);
struct date advanceDay(struct date); 

int main(void) {
        struct date today, tomorrow;
        readDate(&today);
        printDate(today);
        tomorrow = advanceDay(today);
        printDate(tomorrow);
        return 0;
}

/* add your function definitions here */
struct date advanceDay(struct date d) {
    if(d.month==4||d.month==6||d.month==9||d.month==11){
        if(d.day==30){
            d.day=1;
            d.month+=1;
        }
        else{
            d.day+=1;
        }
    }
    
    else if(d.month==2){
        if(d.day==28){
            d.month=3;
            d.day=1;
        }
    }


    else{
        if(d.month==12){
            if(d.day==31){
                d.day=1;
                d.month=1;
                d.year+=1;
            }else{
              d.day+=1;
                

            }
        }
        else{
            if(d.day==31){
                d.day=1;
                d.month+=1;
            }else{
                d.day+=1;
            }


        }

    }
    
        
    return d;
}

void readDate(struct date *dateptr){
    scanf("%d",&(*dateptr).year);
    scanf("%d",&(*dateptr).month);
    scanf("%d",&(*dateptr).day);
}

void printDate(struct date t){
   
        printf("%02d/%02d/%d\n",t.month, t.day, t.year);
}