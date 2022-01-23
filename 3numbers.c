#include<stdio.h>
int main() {
    float a,b,c;
    printf("enter three number\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b) {
        if(a>c) {
            printf("%f is greatest",a);
        }
        else {
            printf("%f is greatest",c);
        }
    }
    else {
        if(b>c) {
            printf("%f is greatest",b);
        }
        else {
            printf("%f is greatest",c);
        }
    }
    return 0;
}