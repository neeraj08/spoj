//prob 1:love ,life and universe
#include <stdio.h>
int main()
{
int pos=-1,i;
int a[1250];
while(1)
{
scanf("%d",&a[++pos]);
if(a[pos]==42)
break;
}
for(i=0;i<=pos;i++)
printf("%d\n",a[i]);
return 0;
}
