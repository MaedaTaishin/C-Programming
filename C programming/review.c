#include <stdio.h>

int main(void){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int numbers = 0;
    int temp;

    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        if(temp > numbers){
            numbers = temp;
        }
    }
    printf("The greatest numbers is: %d", numbers);
    printf("\n");

    int arr[10];
    int sum;
    double average;

    for(int i=0; i<n; i++){
        printf("Enter number%d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum/n;
    printf("Average is: %lf", average);
    return 0;
}