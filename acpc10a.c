#define k scanf("%d %d %d",&a,&b,&c)
#include<stdio.h>
int main(){int a,b,c;k;while(a||b||c){if(a-b==b-c)printf("AP %d\n",2*c-b);else printf("GP %d\n",c*c/b);k;};return 0;}
