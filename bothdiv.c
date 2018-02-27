#include<stdio.h>
int main()
{
int l,r,i;
printf("enter the two numbers");
scanf("%d %d",&l,&r);
for(i=r;i<10000;i++)
{
	if(i%l==0&&i%r==0)
	{
		break;
}
}
	printf("%d",i);
 return 0;
}
