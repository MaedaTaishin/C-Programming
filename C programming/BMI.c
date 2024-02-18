#include <stdio.h>
int main(void){
    double height;
    double weight;
    double BMI;
    printf("Enter your height (cm) ");
    scanf("%lf", &height);
    printf("Enter your weight (kg) ");
    scanf("%lf", &weight);
    BMI = weight/((height/100)*(height/100));
    printf("Your BMI is %lf\n", BMI);
    if (BMI<18.5){
        printf("You are underweight");
    } else if (BMI<25) {
        printf("You are normal");
    } else if (BMI<30.0) {
        printf("You are overweight");
    } else {
        printf("You are obese");
    }
    printf("\n");
    return 0;
}