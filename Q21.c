#include<stdio.h>

void main(){
    int n;

    printf("enter a number \n");
    scanf("%d",&n);

    int l = n%10;
    n/=10;

    int f;

    while (n != 0) {
        f = n;
        n /= 10;
    }

    printf("first digit is %d and last digit is %d",f, l);
    
}