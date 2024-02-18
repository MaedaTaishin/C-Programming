#include <stdio.h>
#include <string.h>
int main(void){
    char str[32];
    printf("input:");
    scanf(" %s", str);
    int index = 0;
    int isNo = 0;
    while (index < strlen(str) && isNo == 0) {
        if (str[index] == '(') {
            while (index < strlen(str)) {
                index++;
                if (str[index] == ')') {
                    break;
                }
                if (index == strlen(str)-1 && !(str[index] == ')')) {
                    isNo = 1;
                }
            }
        }
        index++;
    }
    if (isNo == 1) {
        printf("No");
    } else {
    printf("Yes");
    }
    return 0;
}