#include <stdio.h>

int fact(int num){
    if(num == 1){
        return 1;
    } else {
        return num * fact(num -1);
    }
}

int main(void){
    int num;
    printf("Find the factorial of: ");
    scanf("%d", &num);
    printf("%d\n", fact(num));
    return 0;
}