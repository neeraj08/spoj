#include <stdio.h>
int main()
{
int i,j,t,a;
scanf("%d",&t);
static int arr[1000001];
while(t--)
{
scanf("%d",&a);
arr[a]++;
}
for(i=0;i<1000001;i++)
while(arr[i]--)
printf("%d ",i);
return 0;
}
