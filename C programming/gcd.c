#include <stdio.h>

int gcd(int num1, int num2){
    if (num2 != 0)
        return gcd(num2, num1%num2);
    else
        return num1;
}

int main(int argc, char** argv)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", gcd(num1, num2));
    return 0;
}