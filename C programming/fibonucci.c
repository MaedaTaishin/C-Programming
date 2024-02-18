#include <stdio.h>
int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int array[num];
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i < num; i++ ){
        array[i] = array[i-1] + array[i-2];
    }
    printf("%d\n", array[num-1]);
   return 0;
}