#include <stdio.h>
unsigned int sqrt_(unsigned int n);
int main()
{
unsigned int t,i=2,j,sq,prime[100001],cnt=1;
prime[1]=2;
while(++i,cnt<50001)
{
//sq=sqrt_(i);
sq=i/2;
for(j=1;prime[j]<=sq;j++)
if(i%prime[j]==0)
break;
if(j>cnt)
prime[++cnt]=i;
}
return 0;
}
/*
unsigned int sqrt_(unsigned int n)
{
unsigned int i,k=1000,sq=0;
while(k)
{
	for(i=k;(sq+i)*(sq+i)<=n;i+=k);
	sq+=i-k;
	k/=10;
}
return sq;
}
*/
