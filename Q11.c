#include<stdio.h>
 
int main(){
    int n;
    int sum=0;
    int pdt=1;

    for(int c = 1;c<=10;c++){
         printf("input a number \n");
         scanf("%d",&n);
         sum+=n;
         pdt*=n;
         
    }
    printf("the sum =%d the pdt=%d",sum,pdt);
   



    return 0;
}