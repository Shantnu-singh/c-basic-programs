#include<stdio.h>
int main() {
    float cm,inch;
    printf("enter height in cm\n");
    scanf("%f",&cm);
    inch = cm/2.54;
    int feet = inch/12;
    inch = inch-(feet*12);
    printf("given height is %d feet and %f inch",feet,inch);
    return 0;
}