#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,k,i,j,a,b,*v,m;
scanf("%d %d",&n,&k);
v=(int*)malloc((n+1)*sizeof(int));
for(i=1;i<=n;v[i++]=0);
while(k--)
{
scanf("%d %d",&a,&b);
for(i=a;i<=b;v[i++]++);
}
m=(n-1)/2;
for(i=n-1;i>=m;i--)
for(j=1;j<i;j++)
if(v[j]>v[j+1]){a=v[j];v[j]=v[j+1];v[j+1]=a;}


printf("%d\n",v[m]);
return 0;
}
