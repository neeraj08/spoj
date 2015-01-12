#include<stdio.h>
int main()
{
int ans,h,a,t;
scanf("%d",&t);
while(t--)
{
	scanf("%d %d",&h,&a);
	for(ans=0;h>0 && a>0;ans++)
	{
		if(!(ans&1))
		{
			h+=3;
			a+=2;
		}
		else
		{
			if(h>5 && a>10)
			{
				h-=5;
				a-=10;
			}
			else
			{
				h-=20;
				a+=5;
			}
		
		}
	}
	printf("%d\n",ans-1);
}
return 0;
}
