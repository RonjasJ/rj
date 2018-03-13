#pragma<stdio.h>
int main()
{
    int i,j,n,a[100],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				count=1;
			}
		}
	}
	if(count==0)
	printf("yes");
	else
	printf("no");
  return 0;
}
