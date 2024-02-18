#include<stdio.h>

struct add{
    int x1, y1, x2, y2, z1, z2;
};

int main() {

    struct add sum;
    scanf("%d %d", &sum.x1,&sum.y1);
    scanf("%d %d", &sum.x2,&sum.y2);
    sum.z1 = sum.x1 + sum.x2;
    sum.z2 = sum.y1 + sum.y2;

    printf("(%d, %d) + (%d, %d) = (%d, %d)\n", sum.x1, sum.y1, sum.x2, sum.y2, sum.z1, sum.z2);
    return 0;
}