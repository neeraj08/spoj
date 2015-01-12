#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,t;
	unsigned long long res,carry,cards,p,x,n,digits,LIMIT=1000000000000000;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu%llu",&x,&n);
		p=n;
		cards=x;
		carry=x/LIMIT;
		res=x%LIMIT;
		while(cards>=n)
		{
			carry+=cards/n/LIMIT;
			res+=(cards/n)%LIMIT;
			if(res>LIMIT)
			{
				carry+=res/LIMIT;
				res%=LIMIT;
			}
			cards=cards/n+cards%n;
			
		}
		if(carry>0)
		{
			printf("%llu",carry);
			if(res<LIMIT/10)
			{
				digits=floor(log10(res))+1;
				for(i=digits;i<=15;i++)
				putchar('0');
			}
		
		}
		printf("%llu\n",res);
	}
return 0;
}
