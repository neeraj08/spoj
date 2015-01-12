#include<stdio.h>
char a[101];
int Tot=0;
void fn(int i,int total,int lcount,int rcount)
{
	if(lcount <total/2)
	{
		a[i]='{';
		fn(i+1,total,lcount+1,rcount);
	}
	if(rcount<lcount)
	{
		a[i]='}';
		fn(i+1,total,lcount,rcount+1);
	}
	if(i==total)
	{
		puts(a);
		Tot++;//2nCn/(n+1)
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	a[2*n]='\0';
	fn(0,2*n,0,0);
	printf("Total:%d\n",Tot);
	return 0;
}
