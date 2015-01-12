#include<stdio.h>
int tmp[1000001];
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
int n;
int a[100001];
scanf("%d",&n);
int i;
for(i=0;i<n;scanf("%d",a+i++));
mergesort(a,0,n-1);
for(i=0;i<n;printf("%d ",a[i++]));
puts("");
return 0;
}
