/*SELECTION SORT
author -->NEERAJ LAKHOTIA
date -->
*/
#include "stdio.h"
int main()
{
int i,j,pos,min,n,temp;
printf("Enter n\n");
scanf("%d",&n);
int arr[n];
printf("Enter %d numbers\n",n);
for(i=0;i<n;scanf("%d",&arr[i++]));
for(i=0;i<n-1;i++)
{
min=arr[i];
pos=i;
for(j=i;j<n-1;j++)
if(min>arr[j+1])
{
pos=j+1;
min=arr[pos];
}
if(pos!=i)
{
temp=arr[i];
arr[i]=arr[pos];
arr[pos]=temp;
}
}
printf("Sorted array is\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}

