#include <stdio.h>
#include<string.h>
int main()
{
	int m,n,max=0,i;
	char a[100],b[100];
	printf("\nEnter the two string:  ");
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
	if(m>n)
	{
		max=m;
	}
	else
	{
		max=n;
	}
	for(i=0;i<max;i++)
	{
		if(a[i]==b[i])
		{
			printf("%c",a[i]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
