//DP     LCS
#include<stdio.h>
#include<string.h>
int i,j,n,t,dp[6101][6101];
int main()
{
	char s[6102];
	for(i=0;i<6101;i++)
		dp[0][i]=dp[i][0]=0;
	scanf("%d\n",&t);
	while(t--)
	{
		int res=0;
		scanf("%s",s+1);
		int len=strlen(s+1);
		for(i=1;i<=len;i++)
			for(j=1;j<=len;j++)
			{
				if(s[i]==s[len-j+1])
					dp[i][j]=dp[i-1][j-1]+1;
				else
					dp[i][j]=dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
			}
		printf("%d\n",len-dp[len][len]);
	}
	return 0;
}
