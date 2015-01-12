#include<stdio.h>
int main(){int b,g,m;scanf("%d %d",&b,&g);while(!(g==-1 && b==-1)){m=b>g?g:b;printf("%d\n",(b+g)/(m+1));scanf("%d %d",&b,&g);}return 0;}
