#include <stdio.h>
int main()
{
int m,n,i,j,k,p,r,size,small,sum;
scanf("%d %d %d",&m,&n,&r);
small=m>n?n:m;
int arr[m][n];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&arr[i][j]);
while(size<=small)
{
for(i=0;i<=m-size;i++)
for(j=0;j<=n-size;j++)
{
sum=0;
for(k=i;k<size;k++)
for(p=j;p<size;p++)
sum+=arr[k][p];
if(sum>=r)
{
printf("%d\n%d %d %d %d\n",size*size,i+1,j+1,i+size,j+size);
return 0;
}
}
size++;
}
printf("impossible\n");
return 0;
}
