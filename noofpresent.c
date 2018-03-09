#pragma<stdio.h>
int main()
{
	int r,n,k,i,count=0;
	printf("Enter the  Number:");
	scanf("%d",&n);
	printf("Enter Kth Element:");
	scanf("%d",&k);
	while(n!=0)
	{
		r=n%10;
		if(r==k)
		{
			count++;
		}
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
