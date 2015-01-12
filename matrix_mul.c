#include<stdio.h>
#include<stdlib.h>
int main()
{
int m,n,p,i,j,k,*m1,*m2,*m3;
printf("Enter m,n and p\n");
scanf("%d %d %d",&m,&n,&p);
m1=(int *)malloc(m*n*sizeof(int));
m2=(int *)malloc(n*p*sizeof(int));
m3=(int *)malloc(m*p*sizeof(int));
printf("Enter elements of 1st matrix\n");
for(i=0;i<m*n;scanf("%d",m1+i++));
printf("Enter elements of 2nd matrix\n");
for(i=0;i<n*p;scanf("%d",m2+i++));
for(i=0;i<m;i++)
for(j=0;j<p;j++)
{
*(m3+i*p+j)=0;
for(k=0;k<n;k++)
*(m3+i*p+j)+=(*(m1+i*n+k))*(*(m2+k*p+j));
}
printf("Product is\n");
for(i=0;i<m*p;printf("%d ",*(m3+i++)));
putchar('\n');
return 0;
}
