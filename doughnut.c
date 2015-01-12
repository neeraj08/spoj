#include <stdio.h>
int main()
{
int t,a,b,c;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&a,&b,&c);
if(b>=a*c)
printf("yes\n");
else
printf("no\n");
}
return 0;
}
