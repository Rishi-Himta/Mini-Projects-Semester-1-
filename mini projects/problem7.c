//write a program to read the marks of n subjects and print the highest and lowest marks
#include <stdio.h>
int main() {
    int n, i;
    float marks, highest, lowest;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of subjects must be positive.\n");
        return 1;
    }

    printf("Enter marks for subject 1: ");
    scanf("%f", &marks);
    highest = marks;
    lowest = marks;

    for(i = 2; i <= n; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);

        if(marks > highest) {
            highest = marks;
        }
        if(marks < lowest) {
            lowest = marks;
        }
    }

    printf("Highest marks: %.2f\n", highest);
    printf("Lowest marks: %.2f\n", lowest);

    return 0;
}