#include <stdio.h>
int main()
{
int i,cnt=1,max,t,a[10];char arr[10][101];
scanf("%d",&t);
while(t--)
{
printf("Case #%d:\n",cnt++);
max=0;
for(i=0;i<10;i++)
{
scanf("%s",arr[i]);
scanf("%d",a+i);
if(a[i]>max)
max=a[i];
}
for(i=0;i<10;i++)
{
if(a[i]==max)
printf("%s\n",arr[i]);
}
}
return 0;
}
