#pragma<stdio.h>
void main()
{
int n,i,j;
scanf("%d",&n);
char a[100][10];

for ( i = 0; i < n; i++) {
    scanf("%s", &a[i][12]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
printf("resulted strintg %s",a[i]);
}
}
}
}
