#include<stdio.h>
int main(){int n,i,s;scanf("%d",&n);while(n){s=0;for(i=1;i<=n;i++)s+=i*i;printf("%d\n",s);scanf("%d",&n);}return 0;}
