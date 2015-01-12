#include<stdio.h>
int main()
{
char a[501],b[501];
int p,m,r;
scanf("%s %s",a,b);
while(a[0]!='*')
{
p=r=m=0;
if(a[0]==b[0])m=1;
else r=1;
while(a[++p]!='\0')
{
if(m==(a[p]==b[p]))
continue;
m=m==1?0:1;
if(!m)
r++;
}
printf("%d\n",r);
scanf("%s %s",a,b);
}
return 0;
}
