#include<stdio.h>

int main(){
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    printf("number of digit is %d", count);
    return 0;
}