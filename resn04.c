#include<stdio.h>
int main()
{
int i,n,t,a,r;
scanf("%d",&t);
while(t--)
{
r=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a);
if((a/i)%2)
r=!r;
}
if(r)
printf("ALICE\n");
else
printf("BOB\n");
}
return 0;
}
