#include <stdio.h>
int main(){int i,n;char c;for(i=0;i<10;i++){n=1;while((c=getchar())!='\n'){if(c=='T'||c=='D'||c=='L'||c=='F')n*=2;}printf("%d\n",n);}return 0;}
