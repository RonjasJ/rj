#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],p[30],r[30];
	int i,l,j=0,k=0;
	printf("Enter the String:");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
		{
			p[j]=s[i];yu
			j++;
		}
		else
		{
			r[k]=s[i];
			k++;
		}
	}
	strrev(r);
	printf("\n%s",r);
}
