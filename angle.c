#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float n,n1,a;
    int n2;
    scanf("%f",&n);
    
    a=PI/180;
    n1=sin(n*a);
    n2=round(n1);
    printf("%d",n2);
}
