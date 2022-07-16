// 10. Write a program to print a table of N.

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    printf("\nTABLE OF %d:\n\n",N);
    for(int i = 1 ; i<=10 ; i++){
        int num = (N*i);
        printf("%d x %d = %d\n",N,i,num);
    }
    printf("\n");
}