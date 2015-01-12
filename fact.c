#include <stdio.h>
int main()
{
int t,i,j;
scanf("%d",&t);
int arr[t];
long double fact;
for(i=0;i<t;i++)
scanf("%d",&arr[i]);
for(i=0;i<t;i++)
{
fact=1;
for(j=2;j<=arr[i];j++)
fact*=j;
printf("%.0Lf\n",fact);
}
return 0;
}
