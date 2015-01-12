#include<stdio.h>
int main()
{
int t;
unsigned long long n;
scanf("%d",&t);
while(t--)
{
	scanf("%llu",&n);
	printf("%llu\n",((n+1)*2/3)%1000000007);	
	
} 
return 0;
}
