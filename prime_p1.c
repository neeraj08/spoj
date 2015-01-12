/*to find prime numbers till n
author	--> NEERAJ LAKHOTIA
date	--> 28 JAN 2012
*/
#include <stdio.h>
int main()
{
unsigned int n,i,j,flag=1;
printf("Enter n\n");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
flag=1;
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=0;
break;
}
}
if(flag==1)
printf("%d \t",i);
}


puts("");
return 0;
}
