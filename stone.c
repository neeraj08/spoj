//SPOJ lifting the STONE
#include <stdio.h>
int main()
{
int t,a,b,n,i,loop;double x,y;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
x=y=0;
for(i=0;i<n;i++)
{
scanf("%d %d",&a,&b);
x+=(double)a/n;y+=(double)b/n;
}
printf("%.2lf %.2lf\n",x,y);
}
return 0;
}


