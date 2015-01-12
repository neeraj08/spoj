#include<stdio.h>
int main(){int i,t,c=0,l;char s[999];gets(s);while(scanf("%s",s)>0){printf("%d ",++c);l=-1;while(s[++l]);for(i=0;i<l/2&&s[i]==s[l-1-i++];);if(i-l/2)puts("\"NO\"");else puts("\"YES\"");}return 0;}
