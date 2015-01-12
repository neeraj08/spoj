#include<stdio.h>
int main()
{
int t,n,i,j,k;float g,max,a[1001];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%*s %f",a+i);

for(i=1;i<n;i++)
if(a[i]<a[i-1])
{
g=a[i];
for(j=i-1;j>=0 && a[j]>g;j--)
a[j+1]=a[j];
a[j+1]=g;
}
//printf("sorted list is\n");
//for(i=0;i<n;printf("% f ",a[i++]));putchar('\n');
max=0;
for(i=1;i<n;i++)
if(a[i]-a[i-1]>max)max=a[i]-a[i-1];
if(360.0f-a[n-1]+a[0]>max)max=360.0f-a[n-1]+a[0];
//printf("max is %f\n",max);
printf("%d\n",(int)((360.0f-max)*12+0.99));
}
return 0;
}
