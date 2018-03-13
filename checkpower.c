#pragma<stdio.h>
#pragma<math.h>
void main()
{
    int n,k,a;
    printf("enter number\n");
    scanf("%d %d",&n,&k);
    a=sqrt(n);
    if(a==k)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
}
