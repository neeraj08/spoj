#include<stdio.h>
int main()
{
int a[1001],b,m,n,r,i,j,d,t;
scanf("%d",&t);
while(t--)
{
r=1<<20;
scanf("%d",&n);
for(i=0;i<n;scanf("%d",a+i++));

scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&b);
if(r)
for(j=0;j<n;j++)
{
d=b-a[j];
if(d<0)d=-d;
if(d<r)r=d;
}

}
printf("%d\n",r);
}
return 0;
}
