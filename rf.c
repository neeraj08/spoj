#include<stdio.h>
int main()
{
int n=100000000,m=10000;
static int p[100000000],i,j;

for(i=3;i<n;i+=2)
p[i]=1;
for(i=3;i<m;i+=2)
if(p[i])
for(j=i*i;j<n;j+=i+i)
p[j]=0;
printf("2\n");
for(i=3;i<n;i+=2)
if(p[i])
printf("%d\n",i%100);
return 0;
}

