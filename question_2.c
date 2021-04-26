#include <stdio.h>

void reverseNum(int num);

int main(void){

    int integer = 0;
    printf("Input the number: ");
    scanf("%d", &integer);

    printf("The reverse number: ");
    reverseNum(integer);

    printf("\n");
    
    while(integer != 0){
        printf("Input the number: ");
        scanf("%d", &integer);

        printf("The reverse number: ");
        reverseNum(integer);

        printf("\n");
    }
}

void reverseNum(int num){
    if(num < 10){
        printf("%d", 9-num);
    }
    else{
        printf("%d", 9-(num % 10)); 
        reverseNum( num / 10 ); 
    } 
}