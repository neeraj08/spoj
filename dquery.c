#include<stdio.h>
int main()
{
int v[1000001],r[30001],i,n,q,a,b;
for(i=0;i<=1000000;i++)
v[i]=0; 
r[0]=0;
scanf("%d",&n);
for(i=1;i<=n;i++){scanf("%d",&a);if(v[a]==0){v[a]=1;r[i]=r[i-1]+1;}else{r[i]=r[i-1];}}
scanf("%d",&q);
for(i=0;i<q;i++)
{
scanf("%d %d",&a,&b);
printf("%d\n",r[b]-r[a-1]);
}
return 0;
}
