#include <stdio.h>
int main (void){
    int day;
    int count = 0;
    int num = 0;
    int sum = 0;
    
    printf("Day number: ");
    scanf("%d", &day);

    int array[day];

    while(count < day){
        for (int i = 0; i < num; i++){
            array[count] = num;
            count++;
        }
        num++;
    }

    for (int i = 0; i < day; i++){
        sum += array[i];
    }

    printf("%d coins are collected\n", sum);


    return 0;
}