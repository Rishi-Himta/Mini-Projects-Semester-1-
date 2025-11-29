#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("enter a word \n");
    scanf("%s", word);
    

    int length = strlen(word);
    int isPalindrome = 1;

    for(int i = 0; i < length / 2; i++) {
        if(word[i] != word[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Perfect Secret Word");
    else
        printf("Not a Secret Word");

    return 0;
}