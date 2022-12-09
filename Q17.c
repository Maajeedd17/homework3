#include<stdio.h>
 
int main(){
    int n;
    float sum =0;
    printf("input number");
    scanf("%d",&n);
    
    for (int i = 2; i <= n; i+=2)
    { sum+=1.0/(i);
    }
    
        printf("ans=%f",sum);



    
    


    return 0;
}