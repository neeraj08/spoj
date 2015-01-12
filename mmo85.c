#include<stdio.h>
int main()
{
unsigned long long int n,x,y,r,s;
scanf("%llu",&n);
n=1<<n;
for(x=1;;x+=2)
{
s=7*x*x;
for(y=1;s+y*y<n;y+=2);
if(s+y*y==n)
{
printf("%llu %llu\n",x,y);return 0;
}
}
return 0;
}
