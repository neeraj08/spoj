#include <stdio.h>
int main()
{
int t,n,i;double a;
long long int fctr;
scanf("%d",&t);
while(t--)
{
a=1;
scanf("%d",&n);
for(i=0;i<=n;i++)
a*=2;
fctr=(a-1)/1298074214633706835075030044377087;
printf("%.0lf\n",(a-1)-1298074214633706835075030044377087*fctr);
}
return 0;
}
