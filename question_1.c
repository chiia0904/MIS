#include<stdio.h>
#include<ctype.h>
int longestWord(char *sentence);

int main(){
    char input[]="There are 6 words in this sentence.";
    printf("Input: %s\n",input);
    printf("Position of the word: %d",longestWord(input));
}

int longestWord(char *sentence){    
    int max=0,position=0,max_position=0,i;
    char *index ;
    char longest[20]={};

    while(*sentence != '\0'){        
        int count = 0;
        
        while(isalpha(*sentence) && *sentence!=' '){        
            count++;
            sentence++;
        }
        if(count>0){
            position++;
        }
        if(count>max){
            max = count;
            max_position = position;
            index = sentence - count;
        }
        sentence++;
    }
    for (i = 0; i < max; i++){
        longest[i] = *index;
        index++;
    }

    printf("\"%s\" is the longest word in the sentence.\n", longest);
    return max_position;
}
