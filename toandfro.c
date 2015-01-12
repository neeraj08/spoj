#include<stdio.h>
int main()
{
char s[201],t;int n,l,i,m,j;
scanf("%d\n",&n);
while(n)
{
l=-1;
while((s[++l]=getchar())!='\n');
m=l/n;
for(i=1;i<m;i+=2)
for(j=0;j<n/2;j++)
{
t=s[i*n+j];
s[i*n+j]=s[i*n+n-1-j];
s[i*n+n-1-j]=t;
}
for(j=0;j<n;j++)
for(i=0;i<m;i++)
putchar(s[i*n+j]);
putchar(10);
scanf("%d\n",&n);
}
return 0;
}
