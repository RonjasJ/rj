#pragma<stdio.h>
void main()
{
	int i,j,n,temp,s[50];
	printf("Enter the Size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
			    s[i]=s[j];
			    s[j]=temp;
			}
		}
	}
	printf("%d",s[1]);

	
}
