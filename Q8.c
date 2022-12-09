#include<stdio.h>
 
int main(){

    int low;
    int high;
    int sum=0;

    printf("input low and high");

    scanf("%d",&low);
    scanf("%d",&high);
   
    while(low<=high){
        sum+=low;
        low++;
    
    }
    printf("sum=%d",sum);
    



    return 0;
}