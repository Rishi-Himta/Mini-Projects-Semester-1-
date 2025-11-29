#include <stdio.h>
int main(){
    int n[5][3];
    printf("enter marks of 5 students in 3 subjects:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("marks of student %d in subject %d: ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("The highest marks in each subject maths , chemistry , physics are:\n");
    for(int j=0;j<3;j++){
        int max=n[0][j];
        for(int i=1;i<5;i++){
            if(n[i][j]>max){
                max=n[i][j];
            }
        }
        if(j==0){
            printf("maths: %d\n",max);
        }
        else if(j==1){
            printf("chemistry: %d\n",max);
        }
        else{
            printf("physics: %d\n",max);
        }
    }
    return 0;
}