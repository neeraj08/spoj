#include<stdio.h>
int main()
{
int n,a[1430],i,j,t;
while(scanf("%d",&n),n)
{
for(i=0;i<n;scanf("%d",a+i++));
if(n<7){printf("IMPOSSIBLE\n");continue;}
for(i=1;i<n;i++)
if(a[i]<a[i-1])
{
t=a[i];
for(j=i-1;j>=0&& a[j]>t;j--)
a[j+1]=a[j];
a[j+1]=t;
}

if(a[0]>200 || 1322>a[n-1])
{printf("IMPOSSIBLE\n");continue;}
for(i=1;i<n;i++)
if(a[i]-a[i-1]>200)
{printf("IMPOSSIBLE\n");break;}
if(i==n)printf("POSSIBLE\n");
}
return 0;
}
