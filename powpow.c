#include<stdio.h>
const int mod=1000000007;
long long  mod_(long long x)
{
	if(x<0)x+=mod;
	if(x>mod)return x%mod;
	return x;
}
long long mod_inverse(long long n)
{
	int pow=mod-2;
	long long res=1,p=n;
	while(pow)
	{
		if(pow&1)
			res=mod_(res*p);		
		if(pow>>=1)
			p=mod_(p*p);	
	}
	return res;
}
long long modpow(long long a,long long b)
{
	if(b==0)return 1;
	if(b==1)return a;
	if(b&1)return (a*modpow((a*a)%mod,b>>1))%mod;
	return modpow((a*a)%mod,b>>1)%mod;
}
int main()
{
int i,t;
long long a,b,exp,tmp,n,res,fact[200001];
fact[0]=1;
for(i=1;i<=20000;i++)
{
	fact[i]=fact[i-1]*i;
	if(fact[i]>=mod)
		fact[i]%=mod;
}
scanf("%d",&t);
while(t--)
{
	scanf("%lld %lld %lld",&a,&b,&n);
	if(b==0 || exp==0)
		if(a==0)
		{
			printf("1\n");
			continue;
		}
		else
		{
			printf("%lld\n",a);
			continue;
		}
		
		
	exp=fact[2*n];
	tmp=mod_inverse(fact[n]);
	exp=exp*tmp%mod;
	exp=exp*tmp%mod;
	if(exp==0)
		exp=1;
	res=modpow(exp,b);
	res=modpow(a,res);
	if(!res)
		res=1;
	printf("%lld\n",res);
}
return 0;
}
