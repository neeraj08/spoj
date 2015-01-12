#include<stdio.h>
int main()
{
long long int i,x,y,n;
long long int arr[64][2];
for(i=3;i<64;i++)
{
n=1<<i;
	for(x=1;(7*x*x)<n;x+=2)
	{
		
		for(y=x;(7*x*x+y*y)<=n;y+=2)
		if(7*x*x+y*y==n)
		{
		arr[i][0]=x;arr[i][1]=y;
		printf("%lld=7*(%lld^2)+(%lld^2)\n",n,arr[i][0],arr[i][1]);goto a;
		}
	}
	a:;	
}
//for(n=3;n<64;n++)
//printf("%lld=7*(%lld^2)+(%lld^2)\n",n,arr[i][0],arr[i][1]);goto a;
return 0;
}
