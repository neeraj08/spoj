#include<stdio.h>
int main()
{
int t,n,m,min,ate,a,b,d,i,j,f;
long long r;
scanf("%d",&t);
while(t--)
{
	f=1;//flag
	r=1;
	ate=0;//no. of candies she ate
	min=1;
	scanf("%d %d",&n,&m);
	scanf("%d",&a);
	
	for(i=1;i<m;i++)
	{
		scanf("%d",&b);
		d=b-a;
		if(d>0)r+=d;
		else if(d<0)r+=d;
		else {r--;ate++;}
//	printf("r->%d\t\n",r);
		
		if(min>r)min=r;
		if(r>n-ate)f=0;
		a=b;
	}
	if(f==0)printf("-1\n");
	else
	{
	r=1+(1-min);
	if(r>n-ate)
		printf("-1\n");
	else
		printf("%lld\n",r);
	}
}
return 0;
}
