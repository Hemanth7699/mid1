#include<stdio.h>
int main()
{
int n;
printf("ENTER THE NO :");
scanf("%d",&n);
int i=1;
int fact=1;
for(i=1;i<=n;i++)
{
fact=i*n;
}
printf("%d",fact);
}
