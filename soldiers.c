#include <stdio.h>
int main()
{
int t;
double m,n;
scanf("%d",&t);
while(t--)
{
scanf("%lf %lf",&m,&n);
printf("%.0lf\n",m*(n+1)/2);
}
return 0;
}
