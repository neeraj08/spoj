#include<stdio.h>
int main()
{
int n,i,m,x,y,max1,max2;
scanf("%d",&n);
int arr[n+1];
for(i=1;i<=n;i++)
scanf("%d",arr+i);
scanf("%d",&m);
while(m--)
{
scanf("%d %d",&x,&y);
max1=max2=arr[x]>arr[x+1]?arr[x]:arr[x+1];
for(i=x+1;i<=y;i++)
{
if(arr[i]>0){max2+=arr[i];}
else
{
if(max2>max1)
max1=max2;
max2=arr[i];
}
}//for ends
printf("%d\n",max1);
}//while ends
return 0;
}
