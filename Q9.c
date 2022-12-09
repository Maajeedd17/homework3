#include<stdio.h>
 
int main(){

    int low;
    int high;
    int n;

    printf("input low and high");
    scanf("%d",&low);
    scanf("%d",&high);
   

    printf("input n");
    scanf("%d",&n);
    
   
    while(low<=high){
        if(low%n==0)
            printf("%d \n",low);

        low++;
    }
   
    



    return 0;
}