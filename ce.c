#include<stdio.h>
int main(){int t=3,a,b;char o;while(t--){scanf("%d%c%d\n",&a,&o,&b);if(o=='-')a-=b;else if(o=='+')a+=b;else a*=b;printf("%d\n",a);}return 0;}
