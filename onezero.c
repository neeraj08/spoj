#include<stdio.h>
int main()
{
unsigned long long int t,n,d,m;
scanf("%llu",&t);
while(t--)
{
scanf("%llu",&n);
d=n;
while(1)
{
m=n;
while(m && m%10<2)
m/=10;
if(!m)break;
n+=d;
}
printf("%llu\n",n);
}
return 0;
}
