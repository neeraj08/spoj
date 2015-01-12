//template file to be used in program
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main()
{
	int i,j,m,n,t;
	long long int a[101][101],b[101][101],c[101][101];
	//char c,c2,s[1001],s2[1001];
//	vector<pair<int,int> > d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		//scanf("%s",s);
		//l=strlen(s);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				scanf("%lld",a[i]+j);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lld",b[i]+j);
				if(a[i][j]<b[i][j])
					b[i][j]=a[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lld",c[i]+j);
				c[i][j]*=b[i][j];
			}
		}
		long long int ans=0,tmp=0;
///		cout<<sizeof(long long )<<" "<<sizeof(long long int)<<endl;
		for(i=0;i<n;i++)
		{
			tmp=c[i][0];
			for(j=1;j<m;j++)
			{
				if(tmp<c[i][j])
					tmp=c[i][j];
			}
			ans+=tmp;
		}
		printf("%lld\n",ans);
		//sort(a,a+n);
		//qsort(a,n,sizeof(a[0]),compare);
	}
	return 0;
}
