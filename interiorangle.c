#include <stdio.h>
int main()
{
 
int  a, b, c,i;
printf("enter the angles");
scanf("%d%d%d",&a,&b,&c);
if(a!=0&&b!=0&&c!=0)
{  
    if(a<180&&b<180&&c<180)
   {
    i=a+b+c;
    if(i==180)
    printf("yes");
    else
    printf("no");
   }
   else
   printf("no");
} 
else
printf("no");

return 0;
 
}
