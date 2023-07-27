/*You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.

Examples
Input:
apple
Output:
1
 

Input:
keeper
Output:
1
 

Input:
erroneousnesses
Output:
5
*/

#include<stdio.h>
int main(void) {
    char word[51];
    int i=0;
    int j,k;
    int counter=0;
    char swap;
    //enter the word
    scanf("%s",word);
    //calculate length of the word
    while(word[i]!='\0'){
        i++;
    } int length=i;
    
    for(j=0;j<i-1;j++){
        for(k=0;k<i-1;k++){
            if(word[k]>word[k+1]){
                swap=word[k];
                word[k]=word[k+1];
                word[k+1]=swap;
               
            }
        }
    }
    for(k=0;k<i-1;k++){
     if(word[k]==word[k+1]){
       counter++;
         while(word[k]==word[k+1]){
            k++;
           }
       }
      
    }            
    printf("%d",counter);
    return 0;
}