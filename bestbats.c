#include<stdio.h>
int ncr(int a,int b);
int main()
{
int t,a,i,n,arr[101],cnt,per;
scanf("%d",&t);
while(t--)
{
cnt=0,per=1;
for(i=0;i<101;i++)
	arr[i]=0;
for(i=0;i<11;i++)
	{
	scanf("%d",&a);
	arr[a]++;
	}
scanf("%d",&n);
i=100;
while(cnt<n)
{
if(arr[i])
	if(arr[i]<=n-cnt)
	cnt+=arr[i];
	else
	{
		per=ncr(arr[i],n-cnt);
	cnt+=arr[i];
	}
i--;
}
printf("%d\n",per);
}
return 0;
}

int ncr(int n,int r)
{
int res=1,i,den=1;
for(i=0;i<r;i++)
{
res=res*(n-i)/(i+1);
}
return res;
}
