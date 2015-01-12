#include<stdio.h>
int main()
{
int c=1,t,n,p,a[10][10],i,j,c1,c2,c3;
scanf("%d",&t);
while(t--)
{
printf("Case %d: ",c++);
scanf("%d %d",&n,&p);
for(i=0;i<n;i++)
for(j=0;j<p;j++)
scanf("%d",a[i]+j);
c1=c2=c3=0;
for(j=0;j<p;j++)
{
for(i=0;i<n;i++)
if(a[i][j])break;
if(i==n)break;
}
if(j==p)c1=1;

for(i=0;i<n;i++)
{
for(j=0;j<p;j++)
if(a[i][j])break;
if(j==p)break;
}
if(i==n)c2=1;

for(i=0;i<n;i++)
{
for(j=0;j<p && a[i][j];j++);
if(j==p)break;
}
if(i==n)c3=1;
printf("%d\n",4*c1+2*c2+c3);
}
return 0;
}
