//Given an array records[] of size n, where each element represents the daily profit or loss,find and print the total profit, total loss, and net balance
#include <stdio.h>
int main(){
    printf("Enter the number of days: ");
    int n;
    scanf("%d", &n);
    int records[n];
    for(int i = 0; i < n; i++){
        printf("Enter profit/loss for day %d: ", i+1);
        scanf("%d", &records[i]);
    }
    int total_profit = 0, total_loss = 0;
    for(int i = 0; i < n; i++){
        if(records[i] > 0){
            total_profit += records[i];
        }
        else{
            total_loss += records[i];
        }
    }
    printf("Total profit: %d\n", total_profit);
    printf("Total loss: %d\n", total_loss);
    printf("Net balance: %d\n", total_profit + total_loss);
    return 0;
}