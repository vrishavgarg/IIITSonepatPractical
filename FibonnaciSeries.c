#include<stdio.h>

int main(){

    int n;
    printf("Enter the term you want to find in fibonnaci series: ");
    scanf("%d",&n);

    if(n==1){
        printf("The required term of series is 0\n");
    }else if(n==2){
        printf("The required term of series is 1\n");
    }else{
        int i,sum,b=1,a=0;
        for(i=0; i<n-2; i++){
            sum=b+a;
            a=b;
            b=sum;
        }
        printf("The required term of series is %d\n",sum);
    }

    return 0;
}