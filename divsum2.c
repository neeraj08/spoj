#include<stdio.h>
#include<math.h>
int p[50000000];
int main()
{
int t,i,j,sq,power,pos;
long long n,val,res;
for(i=3;i<50000000;i+=2)
	p[i]=1;

for(i=3;i<7100;i+=2)
	if(p[i])
		for(j=i*i;j<50000000;j+=i+i)
			p[j]=0;

///////////////////////////////////printf("sieve made\n");
pos=0;
p[pos++]=2;
i=3;
while(i<50000000)
	{
	if(p[i])
		p[pos++]=i;
	i+=2;
	}
//////////////////////////////printf("sieve trimmed\n");

scanf("%d",&t);
while(t--)
{
	scanf("%lld",&n);
	i=-1;
	res=1;
	sq=sqrt(n);
	while(p[++i]<=sq)
	if(n%p[i]==0)
	{
		power=1;
		while(n%p[i]==0)
		{
			power++;
			n/=p[i];
		}
///////////////////		printf("t=%d\tmultiplying with %d\n",t,power);
		res=(res*power)%1000000007;
		sq=sqrt(n);
	}
	if(n>1)
	res=(res*2)%1000000007;
	printf("%lld\n",res);
}

return 0;
}
