#include<stdio.h>
int main()
{
int t,n=31700,p[31700],i,j,a,b,r[100001],c=0,min,max,d;
scanf("%d",&t);

for(i=3;i<n;i+=2)
p[i]=1;

for(i=3;i<180;i+=2)
if(p[i])
for(j=i*i;j<n;j+=i+i)
p[j]=0;
p[c++]=2;
for(i=3;i<n;i+=2)
if(p[i])
p[c++]=i;
while(t--)
{
scanf("%d%d",&a,&b);

if(a<=2 &&b>=2)
printf("2\n");
if(a%2==0)
a++;
if(a<3)a=3;
d=b-a;
for(i=0;i<=d;i+=2)
r[i]=1;

for(i=1;i<c;i++)
{
n=p[i];
min=a/n*n;
if(min<a)min+=n;
if(min==n)min+=n+n;
min-=a;
max=b/n*n;
max-=a;
for(j=min;j<=max;j+=n+n)
r[j]=0;
}

for(i=0;i<=d;i+=2)
if(r[i])
printf("%d\n",a+i);

putchar('\n');
}
return 0;
}
