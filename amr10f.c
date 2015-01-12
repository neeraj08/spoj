#include<stdio.h>
int main()
{
int t,a,d,n,r;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&n,&a,&d);
r=a*n+d*(n)*(n-1)/2;
printf("%d\n",r);
}
return 0;
}
