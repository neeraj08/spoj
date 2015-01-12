#include<iostream>
#include<stdio.h>
bool flag[10000001]
using namespace std;

int prime[10000000]={0};
void build_sieve()
{
	int i,j;
	for(i=3;i<10000000;i++,i++)
		prime[i]=1;
	for(i=3;i<3162;i+=2)
	{
		if(prime[i])
			for(j=i*i;j<10000000;j+=i+i)
			{
				prime[j]=0;
			}
	}
	
	
}
int main()
{
int t,n;
int res[2000001];
build_sieve();


return 0;
}
