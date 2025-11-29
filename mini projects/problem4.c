#include <stdio.h>
int main(){
    int a ,b ,c;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if(a<=1){
        printf("%d is not a prime number\n", a);
    }
    for (b=2; b<=a/2; b++){
        if(a % b == 0){
            printf("%d is not a prime number\n", a);
            break;
        }
    }
    if (b == a/2 + 1){
        printf("%d is a prime number\n", a);
    }
    if (a %2 == 0){
        printf("%d even number\n", a);
    } else {
        printf("%d odd number\n", a); 
    }

    return 0;
}