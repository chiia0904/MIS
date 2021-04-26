#include<stdio.h>
void substr(char str[], int sta, int len, char out[]);//宣告自訂函式

int main(){

    char str[] = "ABCDE FGHIJK";
    printf("Given string is %s\n", str);

    char out[20];
   
    substr(str, 5, 5, out);
}

void substr(char str[], int sta, int len, char out[]){

    int i = 0;
    int index = (sta - 1);//由於index為輸入值-1，令index = sta-1

    for (i = 0; i < len; i++, index++){ //輸入所需長度len, 外迴圈使i跑len-1次即可
        out[i] = str[index]; //使out陣列存入str陣列的字元
    }
   printf("%s\n", out);//印出結果
}
   