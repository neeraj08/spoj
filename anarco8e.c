#include<stdio.h>
int main()
{
int a,b;
while(scanf("%d %d",&a,&b),a+1)
{
if(a==1 || b==1)
printf("%d+%d=%d\n",a,b,a+b);
else printf("%d+%d!=%d\n",a,b,a+b);
}
return 0;
}
