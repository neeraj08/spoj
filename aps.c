#include<stdio.h>
#include<math.h>
#define max 10000000
#define max2 3162
long long int ar[max+10];int primes[446],aa[max2],lowestprime[max+10]={0};
void seive()
{
int i,j;
primes[0]=2;

for(i=2;i<=max;i+=2)//max2 replaced with max
	lowestprime[i]=2;//storing in lowestprime[] along with sieve making
//leaving sieve for even no.s
for(i=3;i<max2;i+=2)
{
if(!aa[i])
	{
		for(j=i*i;j<max;j+=i+i)//j=2*i replaced with j=i*i       j+=i replaced with j+=i+i    max2 replaced with max
		{
		aa[j]=1;
		if(lowestprime[j]==0)
			lowestprime[j]=i;
		}
	}
}
}
int main()
{
int i,t,n;
seive();
ar[0]=0;
ar[1]=0;
//f();
for(i=2;i<=max;i++)
ar[i]=ar[i-1]+(lowestprime[i]>0?lowestprime[i]:i);//prime greater than 446 were not prprocessed
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
printf("%lld ",ar[n]);
}
return 0;
}
