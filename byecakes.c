#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,max,max2;
while(scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h),a+1)
{
max=(a+e-1)/e;
max2=(b+f-1)/f;
if(max2>max)max=max2;
max2=(c+g-1)/g;
if(max2>max)max=max2;
max2=(d+h-1)/h;
if(max2>max)max=max2;
printf("%d %d %d %d\n",e*max-a,f*max-b,g*max-c,h*max-d);
}
return 0;
}
