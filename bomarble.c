#include<stdio.h>
int main()
{
unsigned long long int n;
while(scanf("%llu",&n),n)
printf("%llu\n",(3*n*n+5*n+2)/2);
return 0;
}
