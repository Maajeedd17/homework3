#include<stdio.h>
 
int main(){

    int a;
    int b;
    int c;

    printf("input a,b,c");

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
   
    if(a>b){
        if(a>c){
            printf("a is the largest ");
        }else{
            printf("c is the largest");
        }
    }else if(b>c){
        printf("b is the largest");
    }else{
        printf("c is the largest");
    }
    



    return 0;
}