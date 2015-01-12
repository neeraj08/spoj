#include<stdio.h>
int main()
{
int m,n,i,j,left,arr[800001],pos[800001],res[800001],max,cntr;
scanf("%d %d",&m,&n);
max=0;
for(i=1;i<=n;i++)
{
	scanf("%d",arr+i);
	pos[i]=i;
}	
left=n;

for(i=1;i<=m;i++)
{
	max=0;
	cntr=1;
	for(j=1;j<=left;j++)
	{
		if(arr[j]>max)
		{
			max=arr[j];
			res[pos[j]]=i;
		}
		else
		{
			arr[cntr]=arr[j];
			pos[cntr++]=pos[j];
		}
	}
	left=cntr-1;
}
for(i=1;i<=n;i++)
	printf();

return 0;
}
