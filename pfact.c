#include<stdio.h>
int i,j,k,t,n,etf,cnt;
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

for(k=2;k<=100000;k++)
{
n=k;
printf("%d:",k);//replace it with printf("1") ?
for(i=0;i<=cnt && n>1;i++)
if(n%p[i]==0 &&	printf(" %d",p[i]))
while(n%p[i]==0)
	n/=p[i];

if(n>1)printf(" %d",n);
puts("");
}
return 0;
}


