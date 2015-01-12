//spoj FCTRl
#include <stdlib.h>
#include <stdio.h>
int main()
{
int t,res,a;
scanf("%d",&t);
while(t--)
{
res=0;
scanf("%d",&a);
while(a=a/5)
res+=a;
printf("%d\n",res);
}
return 0;
}
