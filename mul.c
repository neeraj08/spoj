//multiply 2 digits of length<=10000 each!
#include <stdio.h>
int main()
{
int n;
unsigned long long int a,b;
scanf("%d",&n);
while(n--)
{
scanf("%llu %llu",&a,&b);
printf("%llu\n",a*b);
}
return 0;
}

