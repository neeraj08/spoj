#include<stdio.h>
int main()
{
	int t,n;
	int arr[101],i,j,res[101];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",arr+i);
		res[0]=arr[0];
		if(n>1)
			res[1]=arr[0]*arr[1];
	}
	return 0;
}
