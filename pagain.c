#include<stdio.h>
int main()
{
int n=3,t,p[6542],pos=0,i,f,m;
p[0]=2;
scanf("%d",&t);
while(n<65536)
{
for(i=0;i<=pos;i++)
if(n%p[i]==0)
break;
if(i>pos)
p[++pos]=n;
n++;
}
while(t--)
{
scanf("%d",&n);
f=1;
m=65536<n?65536:m;
while(1)
{
--n;
for(i=0;p[i]<m && p[i];i++)
break;
if(i>pos)
break;
}
printf("%d\n",n);
}
return 0;
}
