#include<stdio.h>
int main()
{
long long int t,n;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
printf("%lld\n",(2*n*n*n+5*n*n+2*n)/8);
}
return 0;
}
