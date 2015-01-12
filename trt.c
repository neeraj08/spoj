#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*a,p1=0,p2,i,r=0;
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
p2=n-1;
for(i=0;i<n;i++)
scanf("%d",a+i);
for(i=1;i<=n;i++)
if(a[p1]<a[p2]){r+=a[p1]*i;p1++;}
else{r+=a[p2]*i;p2--;}
printf("%d\n",r);
return 0;
}
