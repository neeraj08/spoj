#include<stdio.h>
int gcd(int,int);
int main()
{
int i,n,a,b,g,d1,d2,first,last;
scanf("%d",&n);
scanf("%d %d",&a,&b);
first=a;
d1=b-a;
a=b;
for(i=2;i<n;i++)
{
scanf("%d",&b);
d2=b-a;
g=gcd(d1,d2);
d1=g;
a=b;
}
last=b;
printf("%d\n",(last-first)/g-(n-1));
return 0;
}
int gcd(int a,int b)
{
if(b==0)return a;
return gcd(b,a%b);
}
