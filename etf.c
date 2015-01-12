#include<stdio.h>
int i,j,t,n,etf;
int main()
{
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
etf=n;
for(i=2;i<1000 && n>1;i++)
if(n%i==0)
{
etf=etf/i*(i-1);
while(n%i==0)
n/=i;
}
if(n>1)etf=etf/n*(n-1);

printf("%d\n",etf);
}
return 0;
}

