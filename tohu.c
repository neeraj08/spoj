#include<stdio.h>
int main()
{
int t;
double n,r;
scanf("%d",&t);
while(t--)
{
scanf("%lf",&n);
r=3.0/4-1/(n+1)+(1/(n+2)+1/(n+1))/2;
printf("%.11lf\n",r);
}
return 0;
}

