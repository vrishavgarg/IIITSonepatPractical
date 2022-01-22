#include<stdio.h>

int main(){

    int n;
    printf("Enter the number whose factorial is need to find: ");
    scanf("%d",&n);

    int i,fact=1;
    for(i=1; i<=n; i++){
        fact*=i;
    }
    printf("The factorial of %d is: %d",n,fact);

    return 0;
}