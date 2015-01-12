#include<stdio.h>
int main(){
int a[300000],i,n,v,v2,r=0;
for(i=1;i<300000;i++)
a[i]=i;
scanf("%d",&n);
scanf("%d",&v2);

while(n--)
{
scanf("%d",&v);
if(a[v2]>a[v]){r+=a[v2]-a[v];a[v]+=a[v2]-a[v];}
v2=v;
}
printf("%d\n",r);
return 0;
}
