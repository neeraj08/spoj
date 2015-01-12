//spoj TWINP        n'th twin primes
#include <stdio.h>
int main()
{
long long int t,i,j,cnt=0,s,f,mx=0,prev=2;
scanf("%lld",&t);
long long int arr[t];
for(i=0;i<t;i++)
{
	scanf("%lld",&arr[i]);
	if(mx<arr[i])
	mx=arr[i];
}
long long int res[mx];
short p[s=200*mx+1];
for(p[0]=p[1]=0,i=2;i<s;i++)
p[i]=1;
for(i=2;i<=s/2;i++)
{
f=s/i;
for(j=3;j<=f;j++)
p[i*j]=0;
}
for(i=3;cnt<mx;i+=2)
{
if(p[i] && p[i+2])
res[cnt++]=i;
}
for(i=0;i<t;i++)
printf("%lld %lld\n",res[arr[i]-1],res[arr[i]-1]+2);
return 0;
}
