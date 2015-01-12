#include <stdio.h>
int main()
{
int n,i,k,s,b,num,cnt=0,collected=0;
static int arr[1001];
scanf("%d %d %d",&n,&k,&s);
while(n--)
{
scanf("%d",&b);
arr[b]++;
}
num=k*s;
for(i=1000;collected<num;i--)
{
while(arr[i]-- && collected<num)
{
cnt++;
collected+=i;
}
}
printf("%d",cnt);
return 0;
}
