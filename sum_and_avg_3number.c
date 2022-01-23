
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of b\n");
    scanf("%d",&b);
    printf("enter a number c\n");
    scanf("%d",&c);
    d=a+b+c;
    printf("value of therir sum is= %d\n",d);
    float f = (a+b+c)/3.0;
    printf("the value of the average is = %f",f);
    return 0;
}