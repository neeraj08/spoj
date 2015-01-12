#include<stdio.h>
long long res;
int tmp[200001];
void merge(int *a,int left,int right)
{
int i,pos=0,mid=(left+right)/2,lpos=left,rpos=mid+1;
while(lpos<=mid && rpos<=right)
{
	if(a[lpos]<a[rpos])
		tmp[pos++]=a[lpos++];
	else
	{
		tmp[pos++]=a[rpos++];
		res+=mid+1-lpos;
	}
}
while(lpos<=mid)
tmp[pos++]=a[lpos++];

while(rpos<=right)
tmp[pos++]=a[rpos++];

for(i=0;i<pos;i++)
a[left++]=tmp[i];
}
mergesort(int * a,int left,int right)
{
if(left<right)
{
	int mid=(left+right)/2;
	mergesort(a,left,mid);
	mergesort(a,mid+1,right);
	merge(a,left,right);
}

}

int main()
{
int i,t,n;
int a[200001];
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	for(i=0;i<n;scanf("%d",a+i++));
		
	res=0;
	mergesort(a,0,n-1);	
//	for(i=0;i<n;printf("%d",a[i++]));
	printf("%lld\n",res);
}
return 0;
}

