#include<stdio.h>
const long long mod=1000000007;

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

long long modinverse(long long n)
{
	long long res;
	
	res=modpow(n,mod-2);
	return res;
}


long long modmul(long long a,long long b)
{
	return (a*b)%mod;
}
int main()
{
long long fact[301],n,w,t,r;
fact[0]=fact[1]=1;
int i,j;

for(i=2;i<301;i++)
	fact[i]=(fact[i-1]*i)%mod;

scanf("%lld %lld %lld %lld",&n,&w,&t,&r);
printf("%lld\n",modmul(fact[n],modmul(modinverse(w),modmul(modinverse(t),modinverse(r)))));
return 0;
}
