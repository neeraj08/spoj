#include <stdio.h>
int main(){char c;int n=0,b=3;while((c=getchar())!='\n'){if(c>=65&&c<=90){if(b<3)n+=3-b;b=0;}else b++;}if(b<3)n+=3-b;printf("%d",n);return 0;}
