#include<stdio.h>

int main(){
    int n;
    printf("Enter the natural number: "); 
    scanf("%d",&n);

    switch(n%2){
        case 0:
            switch (n%7)
            {
            case 0:
                switch (n%11){
                    case 0:
                       printf("The number %d is divisible by 2, 7 and 11",n);
                       break;
                    default:
                        printf("The number %d is divisible by 2 and 7",n);
                        break;
                }
                break;

            default:
                switch (n%11){
                    case 0:
                       printf("The number %d is divisible by 2 and 11",n);
                       break;
                    default:
                        printf("The number %d is divisible by 2",n);
                        break;
                }
                break;
            }
            break;
        default:
            switch (n%7)
            {
                case 0:
                    switch (n%11){
                    case 0:
                       printf("The number %d is divisible by 7 and 11",n);
                       break;
                    default:
                        printf("The number %d is divisible by 7",n);
                        break;
                }
                break;

                default:
                    switch (n%11){
                    case 0:
                       printf("The number %d is divisible by 11",n);
                       break;
                    
                }
                break;
            }
            break;
    }

    return 0;
}