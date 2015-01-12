#include<stdio.h> ///tpl.cpp --- template file to be used in program
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<queue>
using namespace std;
inline int inp()
{
    int noRead=0;
    char p=getchar_unlocked();
	for(;p<33;){p=getchar_unlocked();};
    while(p>32)
    {
	    noRead = (noRead << 3) + (noRead << 1) + (p - '0');
	    p=getchar_unlocked();
    }
    return noRead; 
}
int main()
{
	int d,i,j,k,l,m,n,q,t,v,w,x,y,z;
	int b[200001];
	t=inp();
	while(t--)
	{
		n=inp();
		for(i=1;i<=n;i++)
		{
			d=inp();
			b[i]=i-d;
			j=i-1;
			while(d--)
				b[j--]++;
		}
		for(i=1;i<=n;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\n");
	}
	return 0;
}
