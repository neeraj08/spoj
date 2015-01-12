#include<stdio.h>
const long long mod=123456789;
long long modpow(long long a,long long b)
{
	if(a==0)
		return 1;
	if(b==1)
		return a;
	if(b&1)	
		return a*(modpow((a*a)%mod,b>>1))%mod;
	return modpow((a*a)%mod,b>>1);
		
}
	
int main()
{
	long long n;
	scanf("%lld",&n);
	printf("%lld\n",(modpow(2,n-1)+(2*modpow(4,n-1))%mod)%mod);
	return 0;
}
