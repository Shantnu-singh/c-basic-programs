#include<stdio.h>
int main() {
    int t;
    float p,i;
    printf("enter time period\n");
    scanf("%d",&t);
    printf("enter principle and intrest \n");
    scanf("%f%f",&p,&i);
    float c = (p*i*t)/100.0;
    printf("value of simple intrest is = %f",c);
    return 0;
}
