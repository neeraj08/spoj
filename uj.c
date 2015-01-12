#include<stdio.h>
int main()
{
unsigned long long int a,b,pow,i;
scanf("%llu %llu",&a,&b);
while(a || b)
{
pow=1;
for(i=1;i<=b;i++)
pow*=a;
printf("%llu\n",pow);
scanf("%llu %llu",&a,&b);
}
return 0;
}
