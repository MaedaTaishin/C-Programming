#include <stdio.h>
#include <string.h>

int main(){

    int len;
    char str[100];
    int check = 0;
    
    printf("The string is: ");
    scanf("%s", str);
    len = strlen(str);

    for(int i=0; i<len ; i++){
        if(str[i] != str[len-i-1]){
            check = 1;
            break;
        }
    }
    
    if (check) {
        printf("It is not a palindrome\n");
    }    
    else {
        printf("It is a palindrome\n");
    }
    return 0;
}