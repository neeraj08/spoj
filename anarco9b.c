#include<stdio.h>
int main()
{
int a,b,max,min,t;
long long int i,j,lcm,gcd;
while(scanf("%d%d",&a,&b),a)
{
max=a>b?a:b;
min=a+b-max;
for(j=max;;j+=max)
if(j%min==0)break;
lcm=j;

while(b)
{
a=a%b;
t=b;
b=a;
a=t;
}
gcd=a;
printf("%lld\n",lcm/gcd);
}
return 0;
}
