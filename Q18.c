#include<stdio.h>

int main(){
    int n;
    int b = 0;
    printf("enter a number");
    scanf("%d",&n);

    while (n > 0)
    {
        b *= 10;
        b += (n % 2);
        n = n / 2;
    }

    printf("%i", b);
    
}