#include<stdio.h>
int main()
{
int t,n,m,s[5000],i,j,p;
s[0]=0;
for(i=1;s[i-1]<10000000;i++)
s[i]=i*(i+1)/2;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
p=0;
while(s[++p]<n);
if(p%2){i=p-(n-1-s[p-1]);j=1+(n-1-s[p-1]);}
else{i=1+(n-1-s[p-1]);j=p-(n-1-s[p-1]);}
printf("TERM %d IS %d/%d\n",n,i,j);
}
return 0;
}
