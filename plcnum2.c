#include <stdio.h>
int main()
{
int n,m,i,j,x,type=1;
scanf("%d",&n);
m=n*n;
int arr[n][n];
for(j=0;j<n;j++)
arr[0][j]=m--;
while(m)
{
if(type%4==1)
{
for(i=1;i<n-type/2;i++)
arr[i][n-1-type/2]=m--;
type++;
}
else
if(type%4==2)
{
for(j=n-1-type/2;j>=0;j--)
arr[n-1-(type-1)/2][j]=m--;
type++;
}
else
if(type%4==3)
{
for(i=0;i<=n-1-type/2;i++)
arr[n-1-type/2][i]=m--;
type++;
}
else
{
for(j=n-1-type/2;j;j--)
arr[j][n-1-(type-1)/2]=m--;
type++;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",arr[i][j]);
putchar('\n');
}
return 0;
}
