#include <stdio.h>
int main()
{
int t,a,b,c,n,m,sum;
scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%d %d %d %d",&a,&b,&n,&m);
if(n>2)
{
	n-=2;
	sum=(a+b)%m;
	while(n--)
	{
		c=(a+b)%m;
		a=b%m;
		b=c;
		sum=(sum+c)%m;
	}
	printf("%d\n",sum);
}
else	if(n==1)
	printf("%d\n",a%m);
	else printf("%d\n",(a+b)%m);
}//while(t--) ends
return 0;
}
