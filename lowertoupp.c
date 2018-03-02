#include<stdio.h>
int main()
{
	char s[20];
	int i,l;
	printf("Enter String:");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			s[i]=s[i]+32;
		}
		else
		{
			s[i]=s[i]-32;
		}
	}
	printf("%s",s);
	return 0;

}
