#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
    int x;
    printf("enter a integer\n");
    scanf("%d",&x);
    float sq = sqrt(x);
    float e = exp(x);
    int z;
    printf("enter another number which you want to raise power to\n");
    scanf("%d",&z);
    z = pow(x,z);
    printf("squart root of this number is = %f\n",sq);
    printf("exponetial of this number is = %f\n",e);
    printf("squart root of this number is = %d\n",z);
    return 0;
}
