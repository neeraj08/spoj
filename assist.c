#include<stdio.h>
int main()
{
int i,j,k,c,valid[34001]={0},lucky[3001];
for(i=1,k=2;i<=3000;i++,k++)
{
	while(valid[k])k++;
	lucky[i]=k;
	
	c=0;
	for(j=k+1;j<34001;j++)
	{
		if(valid[j])continue;
			c++;
		if(c==k)
		{
			valid[j]=1;
			c=0;
		}
		
	}


}

while(scanf("%d",&i) && i)
	printf("%d\n",lucky[i]	);
return 0;
}
