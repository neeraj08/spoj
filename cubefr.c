#include <stdio.h>
int main()
{
int t,i,j,cb,fctr,n,cas=1;
static int arr[1000001],pos[1000001],cnt=2;

for(i=2;i<=100;i++)
{
	if(!arr[i])
	{
		cb=i*i*i;
		fctr=1000000/cb;
		for(j=1;j<=fctr;j++)
		arr[cb*j]=1;		
	}
}
pos[0]=pos[1]=1;
for(i=2;i<1000001;i++)
if(!arr[i])
pos[i]=cnt++;

scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	if(pos[n])
	printf("Case %d: %d\n\n",cas++,pos[n]);
	else
	printf("Case %d: Not Cube Free\n\n",cas++);
}
return 0;
}
