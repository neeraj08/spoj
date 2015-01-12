#include<stdio.h>
int tmp[100001];
void merge(int *a,int left,int right)
{
int i,j,pos=0,mid=(left+right)/2,lpos=left,rpos=mid+1;
while(lpos<=mid && rpos<=right)
{
	tmp[pos++]=a[lpos]<a[rpos]?a[lpos++]:a[rpos++];
}
while(lpos<=mid)
tmp[pos++]=a[lpos++];

while(rpos<=right)
tmp[pos++]=a[rpos++];

j=left;
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
int i,n,r,t,a,b,cas=1;
int arr[100001];
scanf("%d",&t);
while(t--)
{
	scanf("%d %d",&n,&r);
	for(i=-1;++i<r;scanf("%d %d",&a,&b))
		arr[i]=a*10000+b;
	mergesort(arr,0,r-1);
	for(i=1;i<r;i++)
		if(arr[i]==arr[i-1])
			break;		
	if(i==r)
		printf("Scenario #%d: possible\n",cas++);
	else
		printf("Scenario #%d: impossible\n",cas++);
	

}return 0;
}
