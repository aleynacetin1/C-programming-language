/*Your job is to find the length of the longest word in a text with no punctuation or 
special characters of any kind - only contains words. To do so, please write a C-program 
that takes as a input first the number of words in a text, followed by all of the words in the text. 
The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.

Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7
Input:
7
All cats are grey in the dark
Output:
4
*/

#include <stdio.h>
int main(void) {
   int numberofword;
   int i;
   int j=0;
   int maxlength=0;
   char words[101]; 
    
    printf("Enter the number of words");
    scanf("%d",&numberofword);
    int length[numberofword];
    
    for (i=0;i<numberofword;i++){
        scanf("%s",words);
         j=0;
       while(words[j]!='\0'){
            j++;
        }
         length[i]=j;
       }
    
    
    for(i=0;i<numberofword;i++){
        if(length[i]>maxlength) 
          maxlength=length[i];
    }
   
    printf("%d",maxlength);


return 0;
}
