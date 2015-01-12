#include<stdio.h>
int main()
{
char c;
int i,j=3,p[100001],m=1;
p[m]=2;
while(m<100001)
{
for(i=2;i<=m;i++)
if(j%p[i]==0)
break;
if(i==m+1)p[++m]=j;
j+=2;
}
while(scanf("%d",&i)==1)
printf("%d\n",p[i]);
return 0;
}
