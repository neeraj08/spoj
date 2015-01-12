#include<stdio.h>
int main()
{
	int t,v,n,i,j,r=0,b[5000],pos=-1;
	scanf("%d %*d",&n);//ignore 1st number it is always 1
	for(i=1;i<n;i++)
	{
		scanf("%d",&v);
		v-=1;
		for(j=0;j<=pos;j++)
			if(v%b[j]==0)
				break;
		if(j>pos)
		{
			b[++pos]=v;
			r++;
		}
	}
	printf("%d\n",r);
	return 0;
}


