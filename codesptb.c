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
int i,t,n;
int a[100001];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;scanf("%d",a+i++));
mergesort(a,0,n-1);

}
return 0;
}
