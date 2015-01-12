#include<stdio.h>
int main(){int t,n,d,m;char c[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};scanf("%d",&t);while(t--){scanf("%d",&n);d=n%32;m=(n/=32)%16;printf("%d %s %d\n",d,c[m-1],n/16);}return 0;}
