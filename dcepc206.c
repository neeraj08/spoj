#include <stdio.h>
int main()
{
long long int t,i,a,n,s,s2;
int a[100001];
scanf("%lld",&t);
while(t--)
{
s=0;
s2=0;
scanf("%lld",&n);
scanf("%lld",&a);
s+=a;
for(i=1;i<n;i++)
{
s2+=a;
s+=s2;
scanf("%lld",&a);
}
printf("%lld\n",s2);
}
return 0;
}
