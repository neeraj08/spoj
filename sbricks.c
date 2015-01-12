#include<stdio.h>
int main()
{
unsigned long long int n,sum=0,avrg,i,cnt=0;
scanf("%llu",&n);
unsigned long long int arr[n];
for(i=0;i<n;sum+=arr[i++])
scanf("%llu",&arr[i]);
avrg=sum/n;
for(i=0;i<n;i++)
if(avrg<arr[i])
cnt+=arr[i]-avrg;
printf("%llu",cnt);
return 0;
}
