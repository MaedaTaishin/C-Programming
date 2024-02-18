#include <stdio.h>
#include <string.h>

int main(){
    char x[30];
    printf("Input: ");
    scanf("%s", &x);
    printf("Original input is %s\n", x);
    int len;
    len = strlen(x);
    char y[30];
    int index = 0;
    for (int i=0; i<len; i++){
        if (x[i] != 'c'){
            y[index++] = x[i];
        }
    }
    printf("Output: %s\n", y);
    return 0;
}