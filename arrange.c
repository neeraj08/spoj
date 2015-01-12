#include<stdio.h>
int main()
{
int t,n,p[100002],i,j,tmp;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=1;i<n;i++)
if(p[i]<p[i-1])
{
tmp=p[i];
for(j=i-1;j>=0 && p[j]>tmp;j--)
p[j+1]=p[j];
p[j+1]=tmp;
}
for(j=0;p[j]<4 &&j<n;j++)
printf("%d ",p[j]);
for(i=n-1;i>=j;i--)
printf("%d ",p[i]);
putchar('\n');
}
return 0;
}
