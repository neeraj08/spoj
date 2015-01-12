//spoj cz_prob2		sum of factors
#include <stdio.h>
int sqrt_(long long int n);
int main()
{
int t,i;
scanf("%d",&t);
long long int arr[t],res[t],sq,sum=0,j;
for(i=0;i<t;i++)
scanf("%lld",&arr[i]);
for(i=0;i<t;i++)
{
res[i]=0;
sq=sqrt_(arr[i]);
for(j=1;j<=sq;j++)
if(arr[i]%j==0)
res[i]+=j+arr[i]/j;

if(sq*sq==arr[i])
res[i]-=sq;
}
for(i=0;i<t;i++)
printf("%lld\n",res[i]);
return 0;
}
int sqrt_(long long int n)
{
long long int sq=0,k=10000,i;
while(k)
{
for(i=sq+k;i*i<=n;i+=k);
sq+=i-k;
k/=10;
}
return sq;
}
