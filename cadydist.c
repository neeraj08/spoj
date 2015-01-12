#include<stdio.h>
int main()
{
unsigned long long int r;
int c[100000],p[100000],i,j,n,t;
while(scanf("%d",&n),n)
{
r=0;
for(i=0;i<n;scanf("%d",c+i++));
for(i=0;i<n;scanf("%d",p+i++));

for(i=1;i<n;i++)
{
if(c[i]<c[i-1])
{
t=c[i];
for(j=i-1;c[j]>t && j>=0;j--)
c[j+1]=c[j];
c[j+1]=t;
}

if(p[i]>p[i-1])
{
t=p[i];
for(j=i-1;p[j]<t && j>=0;j--)
p[j+1]=p[j];
p[j+1]=t;
}
}
for(i=0;i<n;i++)
r+=c[i]*p[i];
printf("%llu\n",r);
}
return 0;
}
