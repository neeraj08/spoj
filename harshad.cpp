//template file to be used in program
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int compare(const void *a,const void *b)
{
//	if(((T)a)> ((T)b))
		return 1;
	return 0;
}
int main()
{
	int d,i,j,k,l,m,n,p,q,t,v,w,x,y,z;
	long long r,r2,res;
	int a[1000001],mod=1000000007;
	char c,c2,s[1001],s2[1001];
//	vector<pair<int,int> > d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d\n",&n);
		//scanf("%s",s);
		//l=strlen(s);
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		//sort(a,a+n);
		//qsort(a,n,sizeof(a[0]),compare);
	}
	return 0;
}
