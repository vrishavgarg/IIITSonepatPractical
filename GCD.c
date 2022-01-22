#include<stdio.h>

int main(){

    int a,b;
    printf("Enter the two numbers whose G.C.D. is to find: ");
    scanf("%d %d",&a,&b);
    int max;
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    int i;
    for(i=max; i>0; i--){
        if(a%i==0 && b%i==0){
            printf("G.C.D. of two numbers %d and %d is: %d",a,b,i);
            break;
        }
    }

    return 0;
}