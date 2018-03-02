#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char a[100],b[200];
	printf("enter the string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
            b[j]=a[i];
            j++;
		}
	}
printf("%s",b);
}
