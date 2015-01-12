#include<stdio.h>
long long  max(long long  a,long long  b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
int i,j,t,n,cas=1;
long long a,arr2[1001],arr[1001];
scanf("%d",&t);
while(t--)
{
	printf("Case %d: ",cas++);
	scanf("%d",&n);
	if(n==0)
	{
		printf("0\n");
		continue;
	}
	
	scanf("%lld",&a);

	if(n==1)
	{
		printf("%lld\n",a);	
		continue;
	}
	arr[1]=arr2[1]=a;
	scanf("%lld",&a);
	if(n==2)
	{
		printf("%lld\n",max(a,arr[1]));	
		continue;
	}
	arr[2]=arr2[2]=a;
	for(i=3;i<=n;i++)
	{
		scanf("%lld",arr+i);
		arr2[i]=max(arr[i]+arr2[i-2],arr2[i-1]);
	}
	printf("%lld\n",arr2[n]);
}
return 0;
}
