#include <stdio.h>
int main() {
    int a ;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d You will have a lucky day as your number is even\n", a);
    } else {
        printf("%d You will have a bad day as your number is odd \n", a);
    }
    if ( a % 5 == 0) {
        printf("Also, your number is divisible by 5\n");
    } else {
        printf("Also, your number  is not divisble by 5\n");
    }
    return 0;
}