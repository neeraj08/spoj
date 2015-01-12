#include <stdio.h>
int main()
{
int t,i,value,N;
scanf("%d",&t);
int arr[t];
for(i=0;i<t;i++)
scanf("%d",&arr[i]);
for(i=0;i<t;i++)
{
value=0;
N=arr[i];
while(N)
{
N/=5;
value+=N;
}
printf("%d\n",value);
}
return 0;
}
