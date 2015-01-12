#include<stdio.h>
int main()
{long long int t,a,b;scanf("%lld",&t);while(t--){scanf("%lld %lld",&a,&b);printf("%lld\n",a>b?a-b:b-a);}return 0;}
