#include <stdio.h>
int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0){
        printf("%d is a multiple of 3", num);
    } else {
        printf("%d is not a multiple of 3", num);
    }
    printf("\n");
    if (num % 5 == 0){
        printf("%d is a multiple of 5", num);
    } else {
        printf("%d is not a multiple of 5", num);
    }
    printf("\n");
    if (num % 7 == 0){
        printf("%d is a multiple of 7", num);
    } else {
        printf("%d is not a multiple of 7", num);
    }
    printf("\n");
    return 0; 
}