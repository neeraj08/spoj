#include<stdio.h>
unsigned int sq(unsigned int n);
int main()
{
unsigned int n=1,s,d=1234567890,l=10833333,i,j,p[50001],m=1<<31;
for(p[0]=p[1]=0,i=3;i<=50000;i+=2)
p[i]=1;
for(i=2;i<=50000;i+=2)
p[i]=0;

for(i=3;i<50000;i+=2)
if(p[i])
for(j=i*i;j<50000;p[j]=0,j+=i+i);

p[j=0]=2;
for(i=3;i<50000;i+=2)
if(p[i])
p[++j]=i;

for(i=0;i<l;i++,n=(n+d)%m)
{
if(n==1)
{
putchar('0');
continue;
}s=sq(n);
j=-1;
while(p[++j]<=s)
{if(n%p[j]==0)
break;
}
if(p[j]>s)
putchar('1');
else putchar('0');
}
return 0;
}
unsigned int sq(unsigned int n)
{
unsigned int k=10000,s=0;
while(k)
{
for(s+=k;s*s<=n;s+=k);
s-=k;
k/=10;
}
return s;
}
