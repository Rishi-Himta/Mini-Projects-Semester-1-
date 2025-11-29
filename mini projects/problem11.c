#include <stdio.h>
int main(){
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int present = 0, absent = 0;
    for(int i=0;i<n;i++){
       if(arr[i]==0){
            present++;
        }
        else if(arr[i]==1){
            absent++;
        }
        else{
            printf("undefine");
        }
            }
    printf("Present days: %d\n", present);
    printf("Absent days: %d\n", absent);
    return 0;
}