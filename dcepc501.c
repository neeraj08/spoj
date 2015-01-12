#include<stdio.h>
long long max(long long a,long long b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
int i,j,t,n,arr[1000001];
long long arr2[1000001]; 
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",arr+i);
	
	arr2[0]=arr[0];
	arr2[1]=arr[0]+arr[1];
	arr2[2]=arr2[1]+arr[2];
	arr[3]=max(arr[0]+arr[1]+arr[2],arr[0]+arr[2]+arr[3]);
	arr[4]=
	for(i=3;i<n;i++)
	{
		0
	}
}
return 0;
}
