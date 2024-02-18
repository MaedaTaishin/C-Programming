#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int main(void){

    int num;
    printf("How many numbers: ");
    scanf("%d", &num);
    int data[num];
    for (int i=0; i<num; i++){
        scanf("%d", &data[i]);
    }
    qsort(data, num, sizeof(int), compare);
    for (int i=0; i<num; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}