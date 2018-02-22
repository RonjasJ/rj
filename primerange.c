#include<stdio.h>
 int main()
 {
   int i, flag,a,b, n;
   printf(" ENTER THE  LIMITs : ");
   scanf("%d", &a);
   scanf("%d", &b);
   for(n=a+1; n<b; n++)
   {
     flag = 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
         flag = 0;
         break;
       }
     if(flag==0)
       printf("\t%d", n);
   }
 }
