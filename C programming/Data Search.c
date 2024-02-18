#include <stdio.h>
#include <stdlib.h>

struct movieinfo{
    char name[100];
    int year;
    double income;
};

int main(void){
    int num;
    scanf("%d", &num);
    struct movieinfo m[num];
    for (int i=0; i<num; i++){
        scanf("%s", m[i].name);
        scanf("%d", &m[i].year);
        scanf("%lf", &m[i].income);
    }
    double highest = 0;
    int search = 1;
    int x;
    while (search != 0){
        scanf("%d", &search);
        x = -1;
        for(int i=0; i<num; i++){
            if(m[i].year == search){
                if(m[i].income >= highest){
                    x = i;
                    highest = m[i].income;
                }
            }
        }
        if(search == 0){

        } else if(x == -1){
            printf("Not found\n");
         } else{
            printf("%s %d %.1lf\n", m[x].name, m[x].year, m[x].income);
        } 
    }
    return 0;
}

