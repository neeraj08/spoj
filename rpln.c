#include<stdio.h>
int n,arr[2000005],input[100001],a,b;

void initialize(int index,int from ,int to)
{
	if(from==to)
	{
		arr[index]=input[from];
		return;
	}
	initialize(2*index,from,(from+to)/2);
	initialize(2*index+1,(from+to)/2+1,to);
	a=arr[2*index];
	b=arr[2*index+1];
	arr[index]=a<b?a:b;
//	printf("b/w %d and %d value is %d\n",from,to,arr[index]);
}

int query(int index,int left,int right,int from,int to)
{
	if(from<=left && right<=to)//subset
	{	
		//printf("subset for %d %d\n",left,right);
		return arr[index];	
	}
	if(from>right || to <left)//disjoint set
	{
	//	printf("disjoint set for %d %d\n",left,right);
		return 1000000000;
	}
	int a,b,mid=(left+right)/2;
	a=query(2*index,left,mid,from,to);
	//printf("b/w %d and %d value is %d\n",left,mid,a);
	b=query(2*index+1,mid+1,right,from,to);
//	printf("b/w %d and %d value is %d\n",mid+1,right,b);
	if(a<b)
	{
	//	printf("%d < %d is true\n",a,b);
		return a;
	}
	//printf("%d < %d is false\n",a,b);
	return b;
}

int main()
{
	int t,q,i,A,B,cas=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(i=1;i<=n;i++)
			scanf("%d",input+i);
		initialize(1,1,n);
		printf("Scenario #%d:\n",cas++);
		
		for(i=0;i<q;i++)
		{
			scanf("%d %d",&A,&B);
			if(B<A)
				B^=A^=B^=A;		//swap
			printf("%d\n",query(1,1,n,A,B));
		}
	}
	
return 0;
}
