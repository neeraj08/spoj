#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return (a>b?a:b);
}
int main()
{
	char c,s[50002],s2[50002];
	int r[2][50002]={0},i,j,k=0,k2=1,l,l2;
	gets(s+1);
	gets(s2+1);
	l=strlen(s+1);
	l2=strlen(s2+1);
	//for() initialized res[k=0][...] to 0s
	for(i=1;i<=l;i++)
	{
		k=!k;
		k2=!k2;
		c=s[i];
		r[k][0]=0;
		//printf("k=%d and k2=%d\n",k,k2);
		for(j=1;j<=l2;j++)
		{
			if(c==s2[j])
				r[k][j]=r[k2][j-1] + 1;		//printf("true1 ");
			else
				r[k][j]=max(r[k][j-1],r[k2][j]);	//printf("true2 cmp %d and %d ",r[k][j-1],r[k2][j]);
				//printf("%d ",r[k][j]);
		}
//		puts("");
	}
	printf("%d",r[k][l2]);
	return 0;
}
