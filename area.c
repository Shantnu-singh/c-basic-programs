#include<stdio.h>
int main() {
    float r,l,b;
    const float pi=3.14;
    printf("\t area of rectangle\n");
    printf("enter length and breath respictevely\n");
    scanf("%f%f",&l,&b);
    float a1 = l*b;
    printf("area of rectangle is %f\n",a1);
    printf("\t area of circle\n");
    printf("enter radius of circle\n");
    scanf("%f",&r);
    float a2 = pi*r*r;
    printf("value of area of circle is %f",a2);
    return 0;
}