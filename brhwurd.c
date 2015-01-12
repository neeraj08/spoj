#include<stdio.h>
int main(){int l,i,j,n=1,a;char c,s[11];scanf("%d\n%s",&l,s);for(i=0;i<l;i++){scanf("%c %d\n",&c,&a);for(j=0;s[j]!='\0';j++)if(s[j]==c)n*=a;}printf("%d",n);return 0;}
