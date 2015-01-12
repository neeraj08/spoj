//incomplete
#include<stdio.h>
int main()
{
int t,n,pos,i,j;
int f[160];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
f[pos=159]=1;
for(i=0;i<159;i++)
f[i]=0;
for(j=2;j<=n;j++)
{
for(i=159;i>=pos;i--)
{
f[i]*=j;
}//for(i) ends

for(i=159;i>=pos;i--)
{
if(f[i]>=10)
{
f[i-1]+=f[i]/10;
f[i]%=10;
}
}//for(i) ends

while(f[pos-1])
{
f[pos-2]=f[pos-1]/10;
f[pos-1]%=10;

pos--;
}

}
for(i=pos;i<=159;i++)
printf("%d",f[i]);
putchar('\n');
}//while ends
}
