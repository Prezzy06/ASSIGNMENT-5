// 9. Write a program to print cubes of the first N natural numbers

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    printf("\n");
    for(int i = 1 ; i<=N ; i++){
        int cube = (i*i*i);
        printf("%d\n",cube);
    }
    printf("\n");
}