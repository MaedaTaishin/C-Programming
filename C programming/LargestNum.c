#include <stdio.h>
int main(void){
    int num;
    int num2;
    int largest = 0;
    int x = 1;
    printf("How many numbers: ");
    scanf("%d", &num);
    for (int i=0; i<num; i++){
        printf("Number %d: ", x);
        scanf("%d", &num2);
        if (num2 > largest){
            largest = num2;
        } 
        x++;  
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}