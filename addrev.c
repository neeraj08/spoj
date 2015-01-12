//SPOJ : ADDREV

#include <stdio.h>
int rev(int);
int main()
{
int t,i,k,result;
scanf("%d",&t);
int arr[t][2];
for(k=0;k<t;k++)
{
scanf("%d %d",&arr[k][0],&arr[k][1]);
}
for(k=0;k<t;k++)
{
arr[k][0]=rev(arr[k][0]);
arr[k][1]=rev(arr[k][1]);
result=rev(arr[k][0]+arr[k][1]);
printf("%d\n",result);
}
return 0;
}
int rev(int n)
{
int m=0;
while(n>0)
{
m=m*10+n%10;
n/=10;
}
return m;
}
