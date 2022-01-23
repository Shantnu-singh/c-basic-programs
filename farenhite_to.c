#include<stdio.h>
int main() {
    float f,c;
    printf("enter temp in farenhite\n");
    scanf("%f",&f);
    c= ((f-32)*5.0)/9.0;
    printf("value of temp in celcious is= %f",c);
    return 0;
}