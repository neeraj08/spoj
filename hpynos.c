#include<stdio.h>
int main()
{
unsigned int n,r,s;
scanf("%u",&n);
if(n==1){printf("0\n");return 0;}
for(r=1;r<8;r++)
{
s=0;
while(n){s+=(n%10)*(n%10);n/=10;}
if(s==1){printf("%u\n",r);return 0;}
n=s;
}
printf("-1\n");
return 0;
}
