#include <stdio.h>
int main(void){
    int num;
    int remainder;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0){
        remainder = num%10;
        sum = sum + remainder;
        num = num/10;
    }
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}