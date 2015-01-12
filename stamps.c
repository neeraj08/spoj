#include<stdio.h>
int main()
{
int nc,t,i,j,r,n,res,cas=0,collected,min,max,a[10001];
scanf("%d",&nc);
while(++cas<=nc)
{
res=collected=0;
min=10000;max=0;
scanf("%d %d",&r,&n);
for(i=0;i<=10000;i++)
a[i]=0;
for(i=0;i<n;i++)
{
scanf("%d",&t);
if(max<t)
max=t;
if(min>t)
min=t;
a[t]++;
}
for(i=max;i>=min;i--)
while(a[i])
{
collected+=i;
a[i]--;
res++;
if(collected>=r)
goto b;
}
b:
printf("Scenario #%d:\n",cas);
if(collected>=r)
printf("%d\n\n",res);
else
printf("impossible\n\n");
}
return 0;
}
