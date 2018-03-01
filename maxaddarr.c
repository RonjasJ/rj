#include<stdio.h>
int main()
{
    int n,i,j=0,a[100],b[10],k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n;i<n+k;i++)
    scanf("%d",&a[i]);
    b[1]=a[0];
    for(j=1;j<=k;j++)
    {
	for(i=0;i<n+k;i++)
	{
	    if(b[j]<a[i])
	    {
	       b[j]=a[i];
	       a[i]=0;
	    }
	}
    }
    for(j=1;j<=k;j++)
    printf("%d",b[j]);
}
