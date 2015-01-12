#include <stdio.h>
int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
printf("%.8lf\n",(double)n/(n+1));
}
return 0;
}
