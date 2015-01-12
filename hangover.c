#include<stdio.h>
int main()
{
int i;
float n,arr[280];
arr[1]=0.5;
for(i=2;arr[i-1]<5.2;i++)
arr[i]=arr[i-1]+(float)1/(i+1);
scanf("%f",&n);
while(n)
{
for(i=1;arr[i]<n;i++);
printf("%d card(s)\n",i);
scanf("%f",&n);
}
return 0;
}
