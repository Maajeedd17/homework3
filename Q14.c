#include<stdio.h>
 
int main(){
    int n;
    int fact=1;

    printf("input  n");
    scanf("%d",&n);

    for (int i = n; i > 1; i--)
    {
        fact = fact *i;
    }
    printf("fact=%d",fact);



    
    


    return 0;
}