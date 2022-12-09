#include<stdio.h>

void main(){
    int n;
    int count = 0;

    printf("enter a number \n");
    scanf("%d",&n);

    while (n != 0) {
        n /= 10;
        count++;
    }

    printf("%d", count);
    
}