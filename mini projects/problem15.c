//Given the 2D array bill, write a program to Print the total amount spent by each student in the week.Find the day with the highest total collection.Identify the student (or students) who spent the most overall.
#include <stdio.h>
int main() {
    int bill[5][7]; // 5 students, 7 days
    int student_totals[5] = {0};
    int day_totals[7] = {0};
    int i, j;

    // Input the bill amounts
    printf("Enter the bill amounts for 5 students over 7 days:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            printf("Student %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &bill[i][j]);
            student_totals[i] += bill[i][j];
            day_totals[j] += bill[i][j];
        }
    }

    // Print total amount spent by each student
    printf("\nTotal amount spent by each student:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, student_totals[i]);
    }

    // Find the day with the highest total collection
    int max_day_total = day_totals[0];
    int max_day_index = 0;
    for (j = 1; j < 7; j++) {
        if (day_totals[j] > max_day_total) {
            max_day_total = day_totals[j];
            max_day_index = j;
        }
    }
    printf("\nDay with highest total collection: Day %d with amount %d\n", max_day_index + 1, max_day_total);

    // Identify the student(s) who spent the most overall
    int max_student_total = student_totals[0];
    for (i = 1; i < 5; i++) {
        if (student_totals[i] > max_student_total) {
            max_student_total = student_totals[i];
        }
    }
    printf("\nStudent(s) who spent the most overall:\n");
    for (i = 0; i < 5; i++) {
        if (student_totals[i] == max_student_total) {
            printf("Student %d with amount %d\n", i + 1, student_totals[i]);
        }
    }

    return 0;
}

