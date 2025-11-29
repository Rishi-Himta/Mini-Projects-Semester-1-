
#include <stdio.h>
int main() {
    int n, i;
    float marks, total = 0.0, average;

    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter marks for student %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    average = total / n;

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}