#include<stdio.h>
int res[502][102]={0},cost[102]={0},fun[102]={0};
int main()
{
int a,b,n,c,i,j,maxcost,maxfun;
for(i=0;i<501;i++)
	res[i][0]=0;
for(i=0;i<101;i++)
	res[0][i]=0;
	
while(scanf("%d %d",&c,&n),n)
{
	for(i=0;++i<=n;scanf("%d %d",cost+i,fun+i));
	maxcost=0;
	maxfun=0;
	for(i=1;i<=c;i++)	//for alll possible budgets
	{
		for(j=1;j<=n;j++)//for each party
		{
			if(cost[j]>i)
				res[i][j]=res[i][j-1];
			else
			{
			//printf("adding %d\n",fun[j]);
				a=res[i-cost[j]][j-1]+fun[j];
				b=res[i][j-1];
				res[i][j]=a>b?a:b;
			//	printf("res[%d][%d] is %d\n",i,j,res[i][j]);
			}
		}
		if(res[i][n]>res[i-1][n])
			maxcost=i;
	}
	printf("%d %d\n",maxcost,res[c][n]);
}
return 0;
}
