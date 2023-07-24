/*This is how this code works: There are 3 friends and at first there are 3 signatures in total with the signatures of these three friends. Each of these three friends receives signatures from 2 people on the first day. 
In other words, there were a total of 9 signatures on the first day. 
On the second day, 6 people on the first day received signatures from two people each. 
Thus, the number of newly collected signatures on the second day became 12 and the total number of signatures was 21. 
This program will continue until the total number of signatures is 1000.
OUTPUT should be like this:
Day 1: 6 new signatures! Total: 9
Day 2: 12 new signatures! Total: 21
Day 3: 24 new signatures! Total: 45
Day 4: 48 new signatures! Total: 93
Day 5: 96 new signatures! Total: 189
Day 6: 192 new signatures! Total: 381
Day 7: 384 new signatures! Total: 765
Day 8: 768 new signatures! Total: 1533
*/

#include <stdio.h>
int main(void) {
    int signaturesNeeded = 1000;//have to collect number of signatures
    int day = 0;
    int newSignatures = 3;//initial number of signature
    int totalSignatures = 3;//initial total number of signature
    
    while (totalSignatures < 1000) {
        day++;
        newSignatures = 2*newSignatures;
        printf("Day %d: %d new signatures! ", day, newSignatures);
        totalSignatures = totalSignatures + newSignatures;
        printf("Total: %d\n", totalSignatures);
    }
    return 0;
}