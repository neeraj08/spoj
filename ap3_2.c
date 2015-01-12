#include <stdio.h>
unsigned long long int sq(long long int n);
int main()
{
int t;
unsigned long long int i,j,c1,c2,c3,N,A,s,D,a,b,c,T;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%llu %llu %llu",&c1,&c2,&c3);
a=c1+c2;
b=-(7*c1+5*c2+2*c3);
c=12*c3;
s=sq(b*b-4*a*c);
N=(-b+s)/(2*a);
if(c2>c1)
D=(c2-c1)/(N-6);
else
D=-((c1-c2)/(N-6));
A=c1-2*D;
T=A;
printf("%llu\n",N);
for(j=0;j<N;j++,T+=D)
printf("%llu ",T);
putchar('\n');
}
return 0;
}
unsigned long long int sq(long long int n)
{
unsigned long long int s=0,k=1000000000,i;
while(k)
{
for(i=k;(s+i)*(s+i)<=n;i+=k);
s+=i-k;
k/=10;
}
return s;
}
