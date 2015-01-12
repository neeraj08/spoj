#include<stdio.h>
int main()
{
int n,m,i,j,k,t,r=0,p=-1,p2=-1,a[101],b[10001];
scanf("%d",&n);
for(k=0;k<n;k++)
{
scanf("%d %d",a+k,&m);
for(j=0;j<m;j++)
scanf("%d",b+ ++p);
}

for(i=1;i<n;i++)
if(a[i]<a[i-1])
{
t=a[i];
for(j=i-1;j>=0&& a[j]>t;j--)
a[j+1]=a[j];
a[j+1]=t;
}

for(i=1;i<=p;i++)
if(b[i]<b[i-1])
{
t=b[i];
for(j=i-1;j>=0&& b[j]>t;j--)
b[j+1]=b[j];
b[j+1]=t;
}

b[++p2]=b[0];
for(i=1;i<=p;i++)
if(b[i]!=b[i-1])
b[++p2]=b[i];


for(i=0;i<=p2;i++)
{
for(j=0;j<n && a[j]<b[i];j++);
if(b[i]!=a[j])
r++;
}
printf("%d\n",r);
return 0;
}
