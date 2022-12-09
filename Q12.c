#include<stdio.h>
 
int main(){

    int low;
    int high;
    int count=0;
    int step;


    printf("input low and high");
    scanf("%d",&low);
    scanf("%d",&high);
    printf("input step");
    scanf("%d",&step);
    while(low<=high){
    printf("%d\n",low);
        count++;
        low+=step;
    }
    printf("count=%d",count);
    



    return 0;
}