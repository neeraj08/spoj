#include<stdio.h>
int main()
{
int N,c1,c2,c3,a,r,n,i,t;
scanf("%d",&N);
while(N--)
{
scanf("%d %d %d",&c1,&c2,&c3);
if(c1==c2)
{
n=c3/c1;
printf("%d\n",n);
for(i=1;i<=n;i++)
printf("%d ",c1);
}
else
{
r=(c1*c2-1)/c3+1;
a=c1/r/r;

printf("a is %d\nr is %d\n",a,r);

for(n=3,t=c1;t<c2;n++)
t*=r;
n+=2;
printf("%d\n",n);
for(i=1,t=a;i<=n;i++,t*=r)
printf("%d ",t);
putchar('\n');
}
}
return 0;
}
