// 6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int count = 0;
    printf("\n");
    while(count!=N){
        int num = (count*2) + 2;
        printf("%d\n",num);
        count++;
    }
    printf("\n");
}