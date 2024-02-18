#include <stdio.h>

int main (void){
    int i,n,num[101];
    int array[n];


    for(i=0;i<101; i++){
        num[i] = 0;
    }
    printf("Enter a num: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        int num1 = 0;
	    scanf("%d", &num1);
        array[i] = num1;
	}

    for(i=0; i<n; i++){
        num[array[i]]++;
    }


    for(i=0; i<101; i++){
        if (num[i] == 0){
            continue;
        } else{
            printf("%d appears %d time(s)\n", i, num[i]);
        }
    }
   
}
