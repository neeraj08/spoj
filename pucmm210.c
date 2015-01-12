#include<stdio.h>
int main()
{
long long int t,s,n=1000001,a[1000001],i,j,m=1000000003;
a[1]=s=1;
for(i=2;i<n;i++)
{
s+=i*i*i%m;
a[i]=(a[i-1]+s)%m;
}
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
printf("%lld\n",a[n]);
}
return 0;
}
