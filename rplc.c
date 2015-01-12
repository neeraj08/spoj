#include<stdio.h>
int main()
{
int t,i,j,a,n;long long int s,s2;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d",&n);
scanf("%d",&a);
s2=s=a;
for(j=1;j<n;j++)
{
scanf("%d",&a);
s+=a;
if(s<s2)
s2=s;
}
if(s2<1)printf("Scenario #%d: %lld\n",i,-s2+1);
else
printf("Scenario #%d: 1\n",i);
}
return 0;
}
