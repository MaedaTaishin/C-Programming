#include <stdio.h>
#include <math.h>

const double eps = 0.000001;
int count = 0;

double func(double x){
    double y;
    y = x - 1.2*exp(-x);
    return y;
}

double func_d(double x){
    double y;
    y = 1 + 1.2*exp(-x);
    return y;
}

void output(double a, double x){
    printf("count = %d a = %.6lf x = %.6lf\n", count, a, x);
}

double newton(double a){
   count = count + 1;
   double x = a  - (func(a)/func_d(a));
   if(fabs(x - a) < eps){
       return x;
   } else{
       return newton(x);
   }
}

int main(void){
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double x;
    x = newton(a);
    output(a, x);
    printf("%d %.4f\n", count, x);
    return 0;
}