#include<stdio.h>
int main(){int n,i,p=-1,j,l;char s[1025][1025];scanf("%d",&n);while(scanf("%s",s[++p])==1);while(--p>=0){l=-1;while(s[p][++l]);for(i=0;i<n;i++){for(j=l-1;j+1;)putchar(s[p][j--]);putchar(32);}}return 0;}
