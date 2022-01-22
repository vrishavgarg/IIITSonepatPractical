#include<stdio.h>

int main(){

    int n;
    printf("Enter the natural number: "); 
    scanf("%d",&n);
    int sum=0,i;
    for(i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers: %d\n",n,sum);

    return 0;
}