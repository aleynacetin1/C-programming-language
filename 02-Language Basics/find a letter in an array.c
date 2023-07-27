/*You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

Examples
Input:
apple
Output:
-1
 
Input:
raincoat
Output:
2

Input:
enter
Output:
1

Input:
Taylor
Output:
1
*/
#include <stdio.h>
int main(void) {
    char word[50];
   
    int j=0;
   
    scanf("%s", word);
    //calculate length of the word manually. Also you can use strlen(word) function to find length.
    //BUT You can add to #include <stdlib.h> at the beginning of the code!!
    while(word[j]!='\0'){
      j++;   
    }
   
    int length = j;
    int halfLength = (length + 1) / 2; //we add middle of the word into the firs half
    //For the first half of the word
    int i, found = 0;
    for (i = 0; i < halfLength; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            found = 1;
            break;//if this statement true then loop will be end
        }
    }
    
    if (found) {
        printf("1");
    } else {
        found = 0;  //For the second half of the word
        for (i = halfLength; i < length; i++) {
            if (word[i] == 't' || word[i] == 'T') {
                found = 1;
                break;
            }
        }
        
        if (found) {
            printf("2");
        } else {
            printf("-1");
        }
    }
    
    return 0;
}