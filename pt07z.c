#include<stdio.h>
int main()
{
int n,,j,d,max=0,max2,a[10002][2]={0},tmp[2];
scanf("%d",&n);
while(--n)
{
	scanf("%d %d",&i,&j);
	if(i>j)i^=j^=i^=j;//swap
	if(a[i][0])
	{
		a[i][1]=j;
		if(a[i][0]>a[i][1])a[i][0]^=a[i][1]^=a[i][0]^=a[i][1];
	}
	else
		a[i][0]=j;
}

return 0;
}
