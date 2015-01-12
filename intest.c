#include <stdio.h>
int main()
{
int n,k,c=0,a;
scanf("%d %d",&n,&k);
while(n--)
{
scanf("%d",&a);
if(a%k==0)
c++;
}
printf("%d\n",c);
return 0;
}
