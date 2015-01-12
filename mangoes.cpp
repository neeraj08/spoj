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
	int i,j,k,l,m,n,p,q,t,v,w,x,y,z;
	long long r,r2,res;
//	vector<pair<int,int> > d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		r=n;
		if(r<3)
			printf("0\n");
		else
		{
			r=(r-1)/2;
			printf("%lld\n",(r*r)%n);
		}
	}
	return 0;
}
