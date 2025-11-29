#include <stdio.h>

int main() {
    int a, b, temp1, temp2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp1 = a;
    temp2 = b;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    
    lcm = (temp1 * temp2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
