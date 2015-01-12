#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,*p,a,r=0;
scanf("%d",&n);
p=(int*)malloc((n+1)*sizeof(int));
for(i=1;i<=n;i++)
{
scanf("%d",&a);
p[a]=i;
}
for(i=n-1;i;i--)
if(p[i]>=p[i+1])
{p[i]=1;r++;}
printf("%d\n",r);
return 0;
}
