#include <stdio.h>

int main(){
    int a = 123;
    int b;
    int *p;
    p = &a;
    b = *p;
    printf("%d %d %d\n", a, b, *p);
    a = 200;
    b = 300;
    printf("%d %d %d\n", a, b, *p);
    p = &b;
    printf("%d %d %d\n", a, b, *p);
    int x;
    int *p_x;
    double y;
    double *p_y;
    p_x = &x;
    printf("%p\n", p_x);
    p_x++;
    printf("%p\n", p_x);
    p_y = &y;
    printf("%p\n", p_y);
    p_y++;
    printf("%p\n", p_y);
    int *p1, *p2, a1, a2;
    scanf("%d %d", &a1, &a2);
    p1 = &a1;
    p2 = &a2;
    if (a2>a1){
        p1 = &a2;
        p2 = &a1;
    }
    printf("a = %d b = %d\n", a1, a2);
    printf("max = %d min = %d\n", *p1, *p2);
    return 0;
}