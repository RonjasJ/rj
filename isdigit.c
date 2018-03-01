#include<stdio.h>
int main()
{
	char a[20];
	int i,l,count=0;
	printf("Enter the String:");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(isdigit(a[i]))
		{
			count++;
		}
	}
	if(count==l)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
