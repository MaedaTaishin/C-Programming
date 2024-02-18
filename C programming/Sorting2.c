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
    int freq[100];
    int count = 0;
    for (int i=0; i<num; i++){
        scanf("%d", &data[i]);
        freq[i] = -1;
    }
    qsort(data, num, sizeof(int), compare);
    for(int i=0; i<num; i++){
        count = 1;
        for(int j=i+1; j<num; j++){
            if(data[i]==data[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
    }
    for (int i=0; i<num; i++){
        if (freq[i]!=0){
            printf("%d: %d\n", data[i], freq[i]);
        }
    }
    return 0;
}