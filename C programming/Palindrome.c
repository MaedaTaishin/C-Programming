#include <stdio.h>
int main(void){
    int num;
    int original;
    int reverse = 0;
    int remainder;

    printf("The number is: ");
    scanf("%d", &num);
    original = num;

    while (num != 0){
        remainder = num%10;
        reverse = reverse * 10 + remainder;
        num = num/10;
    }
    if (original == reverse){
        printf("It is a palindrome\n");
    } else{
        printf("It is not a palindrome\n");
    }
}
