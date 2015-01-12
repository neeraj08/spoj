/*to find prime factors on a number n.  O(n)<n.
author -->NEERAJ LAKHOTIA
date -->
*/
#include "stdio.h"
int main()
{
int i,n;
printf("Enter n\n");
scanf("%d",&n);
for(i=2;i<=n;i++)
if(n%i==0)
{
printf("%d ",i);
while(n%i==0)
n/=i;
}
return 0;
}
