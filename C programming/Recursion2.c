#include <stdio.h>

void odd();
void even();
int num = 1;

int main(void){
    odd();
    printf("\n");
}

void odd(){
    if (num <= 10){
        printf("%d ", num+1);
        num++;
        even();
    }
    return;
}

void even(){
    if (num <= 10){
        printf("%d ", num -1);
        num++;
        odd();
    }
    return;
}