//dice problem
#include <stdio.h>
int gcd(int,int);
int main()
{
int t,n,m,max,i,a,cnt=1,g;
scanf("%d",&t);
while(t--)
{
max=0;
scanf("%d %d",&n,&m);
for(i=m;i;i--)
	{
	scanf("%d",&a);
	if(max<a) max=a;
	}
g=gcd(n-max,n);
printf("Case #%d: %d/%d\n",cnt++,(n-max)/g,n/g);
}
return 0;
}

int gcd(int a,int b)
{
if(a%b==0)
return b;
return gcd(b,a%b);
}


