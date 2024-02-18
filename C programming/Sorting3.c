#include <stdio.h>
#include <stdlib.h>

void mergeSort(int data[], int size);
void merge(int data[], int a[], int b[], int x2, int y2);
void show(int a[], int size);

int main(int argc, char** argv)
{
    int num;
    printf("How many numbers: ");
    scanf("%d", &num);
    int data[num];
    for (int i=0; i<num; i++){
        scanf("%d", &data[i]);
    }
    printf("\n");
    mergeSort(data, num);
    show(data, num);
}

void mergeSort(int data[], int size){
    if (size==1){
    } else if (size==2){
        if (data[0]>data[1]){
            int temp = data[1];
            data[1] = data[0];
            data[0] = temp;
        }
    } else if (size>2){
        int x = size/2;
        int y = size-x;
        int a[x];
        int b[y];
        for (int i=0; i<size; i++){
            if (i<x){
                a[i] = data[i];
            } else{
                b[i-x] = data[i];
            }
        }
        mergeSort(a, x);
        mergeSort(b, y);
        merge(data, a, b, x, y);
    }

}

void merge(int data[], int a[], int b[], int x2, int y2){
    int check = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i=0; i<(x2+y2); i++){
        if (((a[count1]<=b[count2]) && check == 0) || check == 1){
            data[i] = a[count1++];
            if (count1 == x2){
                check = 2;
            }
        } else if (((a[count1]>b[count2]) && check == 0) || check == 2){
            data[i] = b[count2++];
            if (count2 == y2){
                check = 1;
            }
        }
    }
}

void show(int a[], int size){
    for (int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}