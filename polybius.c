#include<stdio.h>
int main(){int t,a[26]={11,12,13,14,15,21,22,23,24,24,25,31,32,33,34,35,41,42,43,44,45,51,52,53,54,55};char c;scanf("%d\n",&t);while(t--){while((c=getchar())!='\n')if(c!=' ')printf("%d ",a[c-65]);printf("\n");}return 0;}
