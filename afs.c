#include<stdio.h>
int primes[1001]={0},i,j,pos=0;

sieve()
{
for(i=3;i<1001;i+=2)
	primes[i]=1;
primes[pos++]=2;//primes[0]=2
for(i=3;i<32;i+=2)
if(primes[i])
{
primes[pos++]=i;//3,5,7,11,13,...31
for(j=i*i;j<1001;j+=i+i)
	primes[j]=0;
}
for(i=37;i<1001;i++)
	if(primes[i])
		primes[pos++]=i;//37,41,...
		
}

long long sod(int n)		//sum of divisors<n
{
	long long res=1,p2;	
	int i,j,n2=n,*p,*q;
	p=primes;
	q=primes+pos;
	for(p=primes,q=primes+pos;p<q && *p * *p<=n;p++)
	{
		if(n%*p==0)
		{
			j=*p;
			p2=j*j;
			n/=j;
			while(n%j==0)
			{
				p2*=j;
				n/=j;
			}
//	if(n2<12)
	//		printf("res was %lld\n",res);
			res*=(p2-1)/(j-1);
	//if(n2<12)
		//	printf("res is %lld\n",res);
		}
	}
	if(n>1)//n had a prime factor > 1000
		res*=(1+n);
//	if(n2<12)
	return res-n2;
}

int main()
{

sieve();
int i,n,t;
long long a[1000001],*p=a,*q=a+1000001;
*p=*(p+1)=0;
for(p=a+2;p<q;p++)
*p=*(p-1)+sod(p-a);

scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	printf("%lld\n",a[n]);
}
return 0;
}
