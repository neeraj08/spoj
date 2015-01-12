#include<stdio.h>
long long gcd(int a,int b)
{
	while(b)b^=a^=b^=a%=b;
	return a;
}
long long gcd_(int a,int b)
{
	if(b==0)
		return a;
	return gcd_(b,a%b);
}
long long main()
{
long long n,a[1001],b[1001],c[1001],i,j,gcd_a,gcd_b,gcd_c,res,gcd_abc;
while(scanf("%lld",&n),n)
{
	scanf("%lld %lld %lld",a,b,c);
	gcd_a=a[0];
	gcd_b=b[0];
	gcd_c=c[0];
	for(i=1;i<n;i++)
	{
		scanf("%lld %lld %lld",a+i,b+i,c+i);	
		gcd_a=gcd(gcd_a,a[i]);
		gcd_b=gcd(gcd_b,b[i]);
		gcd_c=gcd(gcd_c,c[i]);
	}
	res=0;
	gcd_abc=gcd(gcd_a,gcd(gcd_b,gcd_c));
	for(i=0;i<n;i++)
	{
		res+=(a[i]/gcd_abc)*(b[i]/gcd_abc)*(c[i]/gcd_abc);
	}
	printf("%lld\n",res);
}
return 0;
}

