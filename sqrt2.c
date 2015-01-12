#include<stdio.h>
int main()
{
long double n=2,k=1,sq=1,i;
while(k>0.0000000000000000001)
{
for(i=sq+k;i*i<=n;i+=k);
sq=i-k;
k/=10;
}
printf("%.77Lf\n",sq);
return 0;
}
