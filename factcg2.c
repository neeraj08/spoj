#include<stdio.h>
int i,j,t,n,etf,cnt;
int main()
{
int p[3200];
for(i=3;i<3200;i+=2)//sieve
	p[i]=1;
for(i=3;i<180;i+=2)
	if(p[i])
		for(j=i*i;j<3200;j+=i*2)
			p[j]=0;

p[cnt=0]=2;

for(i=3;i<3200;i+=2)
	if(p[i])
		p[++cnt]=i;

while(scanf("%d",&n)==1)
{
puts(" 1");//replace it with printf("1") ?
for(i=0;i<=cnt && n>1;i++)
while(n%p[i]==0)
{
	n/=p[i];
	printf(" x %d",p[i]);
}

if(n>1)printf(" x %d ",n);
//puts("");
}
return 0;
}


