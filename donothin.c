#include<stdio.h>
int main()
{
long long int m,n,i,a,s,r;
scanf("%lld %lld",&n,&m);
while(m+1)
{s=r=0;
for(i=0;i<n;i++){scanf("%lld",&a);s+=a;r+=s;}
r*=m;
printf("%lld\n",r);
scanf("%lld %lld",&n,&m);
}
return 0;
}
