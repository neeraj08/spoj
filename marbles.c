#include<stdio.h>
int main()
{
int t,n,r,i,min;long long int rs;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&r);
n--;r--;
min=r<n-r?r:n-r;
rs=1;
for(i=1;i<=min;i++)
rs=(rs*n--)/i;
printf("%lld\n",rs);
}
return 0;
}
