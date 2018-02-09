#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("enter the string");
    scanf("%s",a);
    printf("%s",strcat(a,"."));
    return 0;
}
