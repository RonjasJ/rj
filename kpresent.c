#include<stdio.h>
void main()
{
	int n,k,i,a[50],flag=0;
	printf("Enter N Size:");
	scanf("%d",&n);
	printf("Enter K th Element:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			flag=1;
		}
	}
	if(flag==1)
	 printf("Yes");
	else
	 printf("No");
}
