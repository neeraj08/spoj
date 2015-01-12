//DOTAA
#include <stdio.h>
int main()
{
int t,i,j,n,m,D,H;
scanf("%d",&t);
short res[t];
for(i=0;i<t;i++)
{
scanf("%d %d %d",&n,&m,&D);
for(j=0;j<n;j++)
	{
	scanf("%d",&H);
	while(H>D)
		{
		H-=D;m--;
		}
	}
if(m>0)
res[i]=0;
else
res[i]=1;
}
for(i=0;i<t;i++)
if(res[i])
printf("YES\n");
else printf("NO\n");
return 0;
}
