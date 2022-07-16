// 4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int count = 0;
    printf("\n");
    while(count!=N){
        int num = (count*2) + 1;
        printf("%d\n",num);
        count++;
    }
    printf("\n");
}