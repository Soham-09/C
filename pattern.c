#include<stdio.h>
void main()
{
int n,coef=1,sp,i,j;

printf("Enter the limit : ");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
for(sp=1;sp<=n-i;sp++)
printf("  ");
for(j=0;j<=i;j++)
{
if(j==0 || i==0)
coef=1;
else
coef=coef*(i-j+1)/j;
printf("%4d",coef);
}
printf("\n");
}
}
