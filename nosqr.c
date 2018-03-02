#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,b,c=0;
    float f;
    printf("enter the two number\n");
    scanf("%d %d",&a,&b);
    for(j=a+1;j<b;j++){
    f=sqrt(j);
    i=(int)f;
    if(i==f)
    {
       c=c+1;
    }
    }
    printf("%d",c);

    return 0;
}
