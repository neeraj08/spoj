#include<stdio.h>
int main()
{
int n,i,vl[10001],mn,r;
scanf("%d",&n);
while(n!=-1){
mn=r=0;for(i=0;i<n;i++){scanf("%d",vl+i);mn+=vl[i];}
if(mn%n)
{printf("-1\n");scanf("%d",&n);continue;}
mn/=n;
for(i=0;i<n;i++)
r+=(vl[i]>mn)?vl[i]-mn:0;
printf("%d\n",r);
scanf("%d",&n);
}
return 0;
}
