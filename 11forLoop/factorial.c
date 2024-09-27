#include<stdio.h>

int main(){
    int N;
    printf("enter a number to find factorial : ");
    scanf("%d",&N);

    int product = 1;
    for(int i=1; i<=N; i++){
       // product = product * i;
       product *= i;
    }

    printf("factorail of %d is %d", N, product);

    return 0;
}