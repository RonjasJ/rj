#pragma<stdio.h>
int main()
{
	int n,i;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2!=0)
			{
				printf("%d\t",i);
				break;
			}
		}
	}
	return 0;
}
