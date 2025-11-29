#include <stdio.h>
#define STUDENTS 10
#define DAYS 7

int main(void) {
    int n[STUDENTS][DAYS];
    for (int i = 0; i < STUDENTS; ++i) {
        for (int j = 0; j < DAYS; ++j) {
            printf("attendance of student %d on day %d: ", i+1, j+1);
            if (scanf("%d", &n[i][j]) != 1) { fprintf(stderr, "Bad input\n"); return 1; }
        }
    }
    printf("The number of days each student was present are:\n");
    for(int i=0;i<STUDENTS;i++){
        int present=0;
        for(int j=0;j<DAYS;j++){
            if(n[i][j]==1){
                present++;
            }
        }
        printf("student %d: %d days\n",i+1,present);
    }
    printf("the student(s) with highest attendance:\n");
    int max_present=0;
    for(int i=0;i<STUDENTS;i++){
        int present=0;
        for(int j=0;j<DAYS;j++){
            if(n[i][j]==1){
                present++;
            }
        }
        if(present>max_present){
            max_present=present;
        }
    }
    for(int i=0;i<STUDENTS;i++){
        int present=0;
        for(int j=0;j<DAYS;j++){
            if(n[i][j]==1){
                present++;
            }
        }
        if(present==max_present){
            printf("student %d\n",i+1);
        }
    }
    printf("the day with lowest overall attendance:\n");
    int min_attendance=STUDENTS;
    for(int j=0;j<DAYS;j++){
        int attendance=0;
        for(int i=0;i<STUDENTS;i++){
            if(n[i][j]==1){
                attendance++;
            }
        }
        if(attendance<min_attendance){
            min_attendance=attendance;
        }
    }
    for(int j=0;j<DAYS;j++){
        int attendance=0;
        for(int i=0;i<STUDENTS;i++){
            if(n[i][j]==1){
                attendance++;
            }
        }
        if(attendance==min_attendance){
            printf("day %d\n",j+1);
        }
    }
    return 0;
}