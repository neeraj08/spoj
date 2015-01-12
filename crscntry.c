//DP     LCS
#include<stdio.h>
#include<string.h>
int i,j,n,t,dp[6101][6101],size1,size2;
int a[2001],b[2001];
int lcs()
{
	for(i=1;i<=size1;i++)
		for(j=1;j<=size2;j++)
		{
			if(a[i]==b[j])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
		}
return dp[size1][size2];
}
int main()
{
	for(i=0;i<2001;i++)
		dp[0][i]=dp[i][0]=0;
	scanf("%d\n",&t);
	while(t--)
	{
		int res=0,res2;
		for(i=1;scanf("%d",a+i),a[i];i++);
			size1=i-1;
		
		
		do{
			for(i=1;scanf("%d",b+i),b[i];i++);
			size2=i-1;
			if(size2==0)
				break;
			res2=lcs();
			if(res<res2)
				res=res2;
		}
		while(b[1]!=0);
		
		
		printf("%d\n",res);

	}
	return 0;
}
