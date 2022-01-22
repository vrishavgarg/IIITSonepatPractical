#include<stdio.h>

int main(){
    int n;
    printf("Enter the natural number: "); 
    scanf("%d",&n);

    if(n%2==0 && n%7==0 && n%11==0){
        printf("The number %d is divisible by 2, 7 and 11",n);
    }else if(n%2==0 && n%7==0){
        printf("The number %d is divisible by 2 and 7",n);
    }else if(n%2==0 && n%11==0){
        printf("The number %d is divisible by 2 and 11",n);
    }else if(n%11==0 && n%7==0){
        printf("The number %d is divisible by 11 and 7",n);
    }else if(n%2==0){
        printf("The number %d is divisible by 2",n);
    }else if(n%7==0){
        printf("The number %d is divisible by 7",n);
    }else{
        printf("The number %d is divisible by 11",n);
    }

    return 0;
}