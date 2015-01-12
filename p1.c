#include<stdio.h>
int main()
{
int t,n,n2,i,a,sum,sum2,flag;
int arr[20];
scanf("%d",&t);
while(t--)
{
sum=sum2=flag=0;
for(i=1;i<20;i++)
arr[i]=0;
scanf("%d",&n);
n2=n;
for(i=1;i<=n;i++)
{scanf("%d",&a);
sum+=a;
arr[a]++;}
pos=19;
while(sum2<=sum/2-pos)
{
if(arr[pos])
{arr[pos]--;sum+=pos;}
else
pos--;
}
switch(sum/2-sum2)
{
case 1:if(arr[1])flag=1;break;
case 2:if(arr[2] || arr[1]>1)break;
case 3:if(arr[3] || arr[2] && arr[1] || arr[1]>2)break;
case 4:break;
case 5:break;
case 6:break;
case 7:break;




}
if(flag)
printf("YES\n");
else printf("NO\n");
}
return 0;
}
