//spoj ABA12A.c
#include <stdio.h>
long long unsigned int sqrt_(unsigned long long int);
int is_prime(unsigned long long int);
int main()
{
int t,i;
scanf("%d",&t);
unsigned long long int res[t],A,B;
for(i=0;i<t;i++)
{
scanf("%llu %llu",&A,res+i);
while(is_prime(res[i]))
	res[i]--;
}
for(i=0;i<t;i++)
printf("%llu\n",res[i]);

return 0;
}

int is_prime(unsigned long long int n)
{
unsigned long long int i,sqrt;
sqrt=sqrt_(n);
for(i=2;i<=sqrt;i++)
	if(n%i==0)
		return 0;
return 1;
}

long long unsigned int sqrt_(unsigned long long int n)
{
unsigned long long int sqrt=0,k=100000,i;
while(k)
{
for(i=sqrt+k;i*i<=n;i++);
sqrt=i-k;
k/=10;
}
return sqrt;
}
