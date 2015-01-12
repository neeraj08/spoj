#include<stdio.h>
#include<string.h>
int p[101],pos;
int find_tot(long long int n)
{
	long long int r=n,n2=n;
	int i=0;
	while(i<pos)
	{
		if(n%p[i]==0)
		{
			r=r*(p[i]-1)/p[i];
			while(n%p[i]==0)
				n/=p[i];
		}
		i++;
	}
	if(n>2)
		r=r*(n-1)/n;
//	printf("return %d for %d\n",r,n2);
	return r;
}
int main()
{
	int t,i,j;
	long long int n;
	memset(p,1,sizeof(int)*100);
	p[0]=p[1]=0;
	for(i=2;i<10;i++)
	{
		if(p[i])
		for(j=i*i;j<=100;j+=i)
			p[j]=0;
	}
	pos=0;
	p[pos++]=2;
	i=3;
	while(i<100)
	{
		if(p[i])
		{
			p[pos++]=i;
		}
		i+=2;
	}
	long long r,a[10001],b[10001],c[10001];
	
	a[0]=b[0]=0;
	a[1]=1;
	b[1]=1;
	c[0]=0;
	c[1]=1;
	for(i=2;i<10001;i++)
	{
		a[i]=find_tot(i);
		b[i]=b[i-1]+a[i];
		c[i]=b[i]*b[i];
//		printf("a[%d] : %lld\n",i,a[i]);
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",c[n]);
	}
	return 0;
}
