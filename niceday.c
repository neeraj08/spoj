#include<stdio.h>
int main()
{
int t,n,a,b,c,min,cnt;
scanf("%d",&t);
while(t--)
{
min=1000000;cnt=0;
scanf("%d",&n);
while(n--)
{
scanf("%d %d %d",&a,&b,&c);
if(a+b+c<min)
{
min=a+b+c;cnt=1;
}
else if(a+b+c==min)
cnt++;
}
printf("%d\n",cnt);
}
return 0;
}
