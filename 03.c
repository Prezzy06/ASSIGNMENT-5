// 3. Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    printf("\n");
    while(N!=0){
        printf("%d\n",N);
        N--;
    }
    printf("\n");
}