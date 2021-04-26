#include<stdio.h>
int printSeat(int *seating);
int bubbleSort(int *seating);

int main(){

    int seating[10] = {};
    int i = 0;
    int input = 0;

    printf("\n*Please input seating with 10 seat*\n");
    
    for (i = 0; i < 10; i++){ //將輸入值存入陣列
        scanf("%d", &seating[i]);
    }    
    bubbleSort(seating);   
}


int bubbleSort(int *seating){

    int i = 0, j = 0, temp;

    for (i = 0; i < 10; i++){//外迴圈從index = 0 開始跑，內迴圈為i+1
        for (j = i + 1; j < 10; j++){
            if (seating[j] == 0){//遇到0就跳過
                continue;
            }
            if (seating[i] > seating[j]){//如果前面數字小於後面，進行swap
                temp = seating[i];
                seating[i] = seating[j];
                seating[j] = temp;
            }
        }
    }
    printf("*sorted seating*\n");
    printSeat(seating);
}

int printSeat(int *seating){ //印出陣列

    int i = 0;

    for (i = 0; i < 10 ; i++){
        printf("%d ", seating[i]);
    }
    puts("");
    printf("**********");
}
