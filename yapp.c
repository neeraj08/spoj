#include<stdio.h>
const long long mod=1000000007;
long long modpow(long long a,long long b)
{
	if(b==0)return 1;
	if(b==1)return a;
	if(b&1)return (a*modpow((a*a)%mod,b>>1))%mod;
	return modpow((a*a)%mod,b>>1)%mod;
}

int main()
{
int t,n;
long long res;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	printf("%lld\n",modpow(2,n-1));
}
return 0;
}
