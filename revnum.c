#include<stdio.h>
void main()
{
  int rem,num,sum=0;
  scanf("%d",&num);
  while(num>0)
  {
    rem=num%10;
    num=num/10;
    sum=(sum*10)+rem;
  }
  printf("%d",sum);
}

