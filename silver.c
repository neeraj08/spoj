#include<stdio.h>
int main(){int n,p;scanf("%d",&n);while(n){p=16;while(!((1<<(--p))&n));printf("%d\n",p);scanf("%d",&n);}return 0;}
