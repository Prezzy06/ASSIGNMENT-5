// 7. Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    printf("\n");
    while(N!=0){
        int num = (N*2);
        printf("%d\n",num);
        N--;
    }
    printf("\n");
}