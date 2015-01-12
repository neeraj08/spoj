#include <stdio.h>
int main()
{
int t,i,j,a,b,d,n,sq,fctr;
static int arr[100001],res[100001][10],cnt[10];
for(i=2;i<316;i++)
{
	if(!arr[i])
	{
		sq=i*i;
		fctr=100000/sq;
		for(j=1;j<=fctr;j++)
		arr[sq*j]=1;
	}
}

for(d=0;d<=9;d++)
res[1][d]=1;

for(i=2;i<=100000;i++)
{
	for(d=0;d<=9;d++)
	{
		if(!arr[i])
		{
			n=i;
			while(n)
			{
				if(n%10==d)
				break;
				n/=10;
			}
			if(n)
				cnt[d]++;
		}
		res[i][d]=cnt[d];			
	}
}
scanf("%d",&t);
while(t--)
{
	scanf("%d %d %d",&a,&b,&d);
	printf("%d\n",res[b][d]-res[a-1][d]);
}
return 0;
}
